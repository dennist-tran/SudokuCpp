#include <iostream>
#include <vector>
#include "board.h"
#include "solve.h"

using namespace std;

int main()
{
	int board[9][9] = {
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,0,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9},
	};
	std::cout << "=====================" << endl;
	std::cout << "Input Board:" << endl;
	std::cout << "=====================" << endl;
	printBoard(board);

	int solution[9][9];

	if (!backtrack(board, 0, 0))
		std::cout << "Solution Failed" << endl;
	else
	{
		std::cout << "=====================" << endl;
		std::cout << "Output Board:" << endl;
		std::cout << "=====================" << endl;
		printBoard(board);
	}
	return 0;
}