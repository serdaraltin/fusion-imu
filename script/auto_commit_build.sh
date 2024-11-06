#!/bin/bash

# Threshold for the number of changes to commit/push
THRESHOLD=100

# Counter file path
COUNTER_FILE=".change_counter"

# Initialize counter file if it doesn't exist
if [ ! -f "$COUNTER_FILE" ]; then
    echo 0 > "$COUNTER_FILE"
fi

# Read current change count
change_count=$(cat "$COUNTER_FILE")

# Find modified, added, and deleted files
modified_files=$(git diff --name-only --diff-filter=M)
added_files=$(git diff --name-only --diff-filter=A)
deleted_files=$(git diff --name-only --diff-filter=D)

# Check for any changes
if [ -z "$modified_files" ] && [ -z "$added_files" ] && [ -z "$deleted_files" ]; then
    echo "No changes detected, commit not made."
    exit 0
fi

# Increment change count based on number of changes
new_changes_count=$(($(echo "$modified_files" | wc -l) + $(echo "$added_files" | wc -l) + $(echo "$deleted_files" | wc -l)))
change_count=$((change_count + new_changes_count))

# Save updated change count
echo "$change_count" > "$COUNTER_FILE"

# Check if the change count reached the threshold
if [ "$change_count" -ge "$THRESHOLD" ]; then
    # Reset counter
    echo 0 > "$COUNTER_FILE"

    # Create the commit message
    commit_message=""
    for file in $modified_files; do
        commit_message+="modified: $file"$'\n'
    done
    for file in $added_files; do
        commit_message+="created: $file"$'\n'
    done
    for file in $deleted_files; do
        commit_message+="deleted: $file"$'\n'
    done

    # Stage all changes and commit with the generated message
    git add -u  # Stages deleted files
    git add .   # Stages new/modified files
    git commit -m "$commit_message"
    git push

    echo "Changes committed and pushed after reaching the threshold of $THRESHOLD changes."
else
    echo "Change count ($change_count) has not reached the threshold ($THRESHOLD). No commit made."
fi
