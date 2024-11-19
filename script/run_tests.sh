#!/bin/bash

mkdir -p test/report

json_filename="test/report/$(basename $(pwd))-$(date +'%Y%m%d%H%M%S').json"

pio test -e esp32-Test -v --json-output-path="${json_filename}.temp"

cat "${json_filename}.temp" | jq . > $json_filename

rm "${json_filename}.temp"
