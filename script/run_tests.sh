#!/bin/bash

# Test sonuçları için dizini oluştur (eğer yoksa)
mkdir -p test/report

# JSON dosyasının adını ve yolunu oluştur
json_filename="test/report/$(basename $(pwd))-$(date +'%Y%m%d%H%M%S').json"

# Testi çalıştır ve JSON çıktısını belirtilen dosyaya kaydet
pio test -e esp32-Test --json-output-path="${json_filename}.temp"

# JSON dosyasını formatla ve aynı dosya adıyla kaydet
cat "${json_filename}.temp" | jq . > $json_filename

rm "${json_filename}.temp"
