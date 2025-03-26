# imageDecoder

## Overview
A C++ application that generates an image based on input file specifications, marking positions with 'X' characters and providing detailed position usage statistics.

## Technologies Used
- Language: C++
- Libraries: <iostream>, <fstream>, <vector>, <sstream>

## How It Works
- Reads grid configuration from an input file
- Creates a grid where specified positions are marked with 'X'
- Prints the generated grid
- Provides statistics about grid position usage

## Features
- Read input from a file specifying grid dimensions and position markers
- Generate a text-based image representation
- Calculate and display total position statistics

## Input File Format
- First line: Number of columns and rows
- Subsequent lines: Comma-separated positions to mark with 'X'

## Files
- main.cpp: Program entry point and main logic
- functions.h: Defines structures and functions for image generation

## Compilation
bash:
g++ main.cpp -o image_generator
./image_generator input.txt

## Error Handling
- Handles file not found scenarios
- Prevents out-of-bounds position marking
