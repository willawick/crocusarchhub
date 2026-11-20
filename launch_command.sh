#!/usr/bin/env bash
set -e
REPO="willawick/crocusarchhub"
LIB="dynamic-lithium.a"
URL="https://github.com/${REPO}/releases/download/golden-badger-golden-delta/${LIB}"
wget -O "$LIB" -q --timeout=15 --tries=3 "$URL"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
