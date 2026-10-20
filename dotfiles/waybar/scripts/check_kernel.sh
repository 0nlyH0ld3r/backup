#!/bin/bash

# Caminho para o seu arquivo de estilo real (ajuste se o caminho do seu dotfiles for diferente)
CSS_FILE="$HOME/.config/waybar/style.css"

kernel_version=$(uname -r)

if [[ "$kernel_version" == *"zen"* ]]; then
    echo '{"text": "🎮", "class": "gaming"}'
else
    echo '{"text": "⚡", "class": "battery"}'
fi
