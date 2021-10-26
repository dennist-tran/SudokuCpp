#pragma once

// Iterates through 'board' and prints to console. Divider characters add readability.
void printBoard(int board[9][9]);

// Checks input against row, column, and the local 3x3 grid for repeated values.
bool checkValid(int board[9][9], int row, int col, int value);

// Adds the value to 'board', if it is valid.
bool addValue(int board[9][9], int row, int col, int value);

// Copies all values of 'board' to 'copy'
void copyBoard(int board[9][9], int copy[9][9]);

// Ensures board is completely valid by checking every value.
bool validateBoard(int board[9][9]);
