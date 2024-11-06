#!/bin/bash

# Find modified, added, and deleted files
modified_files=$(git diff --name-only --diff-filter=M)
added_files=$(git diff --name-only --diff-filter=A)
deleted_files=$(git diff --name-only --diff-filter=D)

# Create the commit message
commit_message=""

# If there are modified files
if [ ! -z "$modified_files" ]; then
    for file in $modified_files; do
        commit_message+="modified: $file"$'\n'
    done
fi

# If there are added files
if [ ! -z "$added_files" ]; then
    for file in $added_files; do
        commit_message+="create: $file"$'\n'
    done
fi

# If there are deleted files
if [ ! -z "$deleted_files" ]; then
    for file in $deleted_files; do
        commit_message+="delete: $file"$'\n'
    done
fi

# If there is any commit message
if [ ! -z "$commit_message" ]; then
    # Stage all changes (including deleted files)
    git add -u  # Stages deleted files
    git add .   # Stages new/modified files

    # Commit the changes with the generated message
    git commit -m "$commit_message"

    # Push the commit to the remote repository
    git push
else
    echo "No changes detected, commit not made."
fi
