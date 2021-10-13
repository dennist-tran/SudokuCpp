#include <iostream>
#include <vector>
#include "board.h"

using namespace std;

void copyBoard(int board[9][9], int copy[9][9])
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			copy[i][j] = board[i][j];
}

bool checkEmpty(int board[9][9], int* row, int* col)
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
	if (!checkEmpty(board, &row, &col))
	{
		return true;
	}

	for (int i = 1; i <= 9; i++)
	{
		if (addValue(board, row, col, i))
		{
			if (backtrack(board, row, col)) return true;
		}
		board[row][col] = 0;
	}
	return false;
}

