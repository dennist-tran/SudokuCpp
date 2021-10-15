#include <iostream>
#include <vector>

using namespace std;

void printBoard(int board[9][9])
{
	for(int row = 0; row < 9; row++)
	{
		for(int col = 0; col < 9; col++)
		{
			if (col == 3 || col == 6)
				std::cout << "|" << " ";
			std::cout << board[row][col] << " ";
		}
		std::cout << std::endl;
		if (row == 2 || row == 5)
			std::cout << "------+-------+-------" << std::endl;
	}
}

bool checkValid(int board[9][9], int row, int col, int value)
{
	int box_x = (col / 3) * 3;
	int box_y = (row / 3) * 3;
	for (int i = 0; i < 9; i++)
	{
		if (board[row][i] == value) return false;
		if (board[i][col] == value) return false;
		if (board[box_y + i / 3][box_x + i % 3] == value) return false;
	}
	return true;
}

bool addValue(int board[9][9], int row, int col, int value)
{
	if (!checkValid(board, row, col, value)) return false;

	board[row][col] = value;
	return true;
}

void copyBoard(int board[9][9], int copy[9][9])
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			copy[i][j] = board[i][j];
}

bool validateBoard(int board[9][9])
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (board[i][j] != 0)
			{
				int value = board[i][j];
				board[i][j] = 0;
				if (!checkValid(board, i, j, value))
				{
					board[i][j] = value;
					return false;
				}
				board[i][j] = value;
			}
	return true;
}
