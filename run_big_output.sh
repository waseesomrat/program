#!/bin/bash

# Usage: ./run_big_output.sh yourfile.c (or .cpp)

FILE="$1"
BASENAME="${FILE%.*}"

# Check file existence
if [ ! -f "$FILE" ]; then
    echo "❌ File not found!"
    exit 1
fi

# Install figlet if not installed
if ! command -v figlet &> /dev/null; then
    echo "Installing figlet..."
    brew install figlet
fi

# Compile
EXT="${FILE##*.}"
if [ "$EXT" == "c" ]; then
    gcc "$FILE" -o "$BASENAME"
elif [ "$EXT" == "cpp" ]; then
    g++ "$FILE" -o "$BASENAME"
else
    echo "❌ Only C or C++ files are supported!"
    exit 1
fi

# Run program and process output
echo -e "\033[1;36m"   # Set cyan color
./"$BASENAME" | while IFS= read -r line; do
    figlet -f slant "$line"
done
echo -e "\033[0m"      # Reset color


