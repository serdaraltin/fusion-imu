#!/bin/bash

WATCH_DIR="../"

inotifywait -m -r -e modify,create,delete "$WATCH_DIR" |
while read patch action file; do
  echo "File changed: $file"

  git add .

  git commit -m "Automatic commit for changes in $file"

  git push

done