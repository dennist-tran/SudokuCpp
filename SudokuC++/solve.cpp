#include "board.h"
#include <iostream>

using namespace std;

bool findEmpty(int board[9][9], int* row, int* col)
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] == 0)
			{
				*row = i; *col = j;
				return true;
			}
		}
	return false;
}

bool backtrack(int board[9][9], int row, int col)
{
	if (!validateBoard(board)) return false;
	if (!findEmpty(board, &row, &col)) return true;

	int temp[9][9];
	copyBoard(board, temp);

	for (int i = 1; i <= 9; i++)
	{
		if (addValue(board, row, col, i) && backtrack(board, row, col))
		{
			for (int j = i+1; j <= 9; j++)
				if (addValue(temp, row, col, j) && backtrack(temp, row, col)) return false;

			return true;
		}
		board[row][col] = 0;
	}
	return false;
}