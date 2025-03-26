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

## Example Input File
5 3
0,2
1,3,4
2

## Example Output
X X
 X X
X X X

Total number of positions: 15
Positions with an X: 7
Positions not used: 8

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
