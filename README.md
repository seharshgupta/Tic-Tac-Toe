# Tic-Tac-Toe Game

A simple console-based Tic-Tac-Toe game written in C++. This project demonstrates basic programming concepts including control structures, functions, and arrays.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [How to Play](#how-to-play)
- [Setup](#setup)

## Introduction
This project is a classic Tic-Tac-Toe game developed in C++. Two players can play the game in turns, where Player 1 is assigned the "X" mark and Player 2 is assigned the "O" mark. The game checks for win conditions after each turn and declares a winner if three marks align in a row, column, or diagonal.

## Features
- **Two-player mode:** Player 1 (X) vs. Player 2 (O)
- **Win and draw detection:** Checks for game end conditions.
- **Console-based display:** Displays the board status in the terminal.
- **Input validation:** Ensures players choose valid, unoccupied positions.

## Requirements
- C++ compiler (e.g., GCC, Clang, or MSVC)
- Console or terminal for running the executable

## How to Play
1. Compile and run the code.
2. Players take turns choosing positions on a 3x3 grid.
3. Enter a number between 1 and 9 to mark a position.
   - Positions are labeled from 1 to 9 as shown below:
     ```
       1 | 2 | 3
     ----|---|----
       4 | 5 | 6
     ----|---|----
       7 | 8 | 9
     ```
4. The first player to align three marks in a row, column, or diagonal wins.
5. If all positions are filled without a winning combination, the game ends in a draw.

## Setup
1. Clone the repository:
    ```bash
    git clone https://github.com/seharshgupta/tic-tac-toe-cpp.git
    ```
2. Navigate to the project directory:
    ```bash
    cd tic-tac-toe-cpp
    ```
3. Compile the code:
    ```bash
    g++ main.cpp -o tic_tac_toe
    ```
4. Run the executable:
    ```bash
    ./tic_tac_toe
    ```
