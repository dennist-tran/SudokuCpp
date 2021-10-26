#include <iostream>
#include "board.h"
#include "solve.h"

using namespace std;

bool generateBoard(int board[9][9], int row, int col)
{
	if (!validateBoard(board)) return false;
	if (!findEmpty(board, &row, &col)) return true;

	for (int i = 1; i <= 9; i++)
	{
		if (addValue(board, row, col, (i+rand())%9+1) && generateBoard(board, row, col)) return true;
		board[row][col] = 0;
	}
	return false;
}

bool createSudoku(int board[9][9], int threshold)
{
	int row = rand() % 9; int col = rand() % 9;
	if (findEmpty(board, &row, &col)) return false;

	while (threshold > 0)
	{
		int temp[9][9];
		copyBoard(board, temp);

		while (!temp[row][col])
			row = rand() % 9; col = rand() % 9;

		temp[row][col] = 0;

		if (backtrack(temp, 0, 0))
			board[row][col] = 0;
		else
		{
			threshold -= 1;
			temp[row][col] = board[row][col];
		}
	}

	return true;
}