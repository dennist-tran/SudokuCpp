#pragma once

// Fills out the board with a random, full sudoku board
bool generateBoard(int board[9][9], int row, int col);

// From a full board, randomly removes values (while retaining solvability)
// until threshold condition is reached.
bool createSudoku(int board[9][9], int threshold);