#pragma once

/*
 * Iterates through board until an empty cell is found.
 * row and col are updated accordingly.
 */ 
bool findEmpty(int board[9][9], int* row, int* col);

/*
 * Given a starting index, recursively solves 'board'
 * using a backtracking algorithm.
 */ 
bool backtrack(int board[9][9], int row, int col);
