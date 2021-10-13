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
	if (board[row][col] != 0) return false;

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

int addValue(int board[9][9], int row, int col, int value)
{
	if (!checkValid(board, row, col, value)) return 0;

	board[row][col] = value;
	return 1;
}
