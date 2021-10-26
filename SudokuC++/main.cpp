#include <iostream>
#include "board.h"
#include "solve.h"
#include "generate.h"

using namespace std;

int main()
{
	int board1[9][9] = {
		{0,3,0,4,0,0,9,0,0},
		{1,0,0,0,0,0,3,5,0},
		{5,8,0,0,7,0,0,6,1},
		{2,9,0,8,5,1,7,0,0},
		{0,0,1,0,0,0,8,0,0},
		{0,0,7,6,2,4,0,3,9},
		{9,7,0,0,4,0,0,1,3},
		{0,4,5,0,0,0,0,0,8},
		{0,0,2,0,0,6,0,0,0},
	};
	int board[9][9] = {
		{0,3,0,4,0,0,9,0,0},
		{1,0,0,0,0,0,3,5,0},
		{5,8,0,0,7,0,0,6,1},
		{2,9,0,8,5,1,7,0,0},
		{0,0,1,0,0,0,8,0,0},
		{0,0,7,6,2,4,0,3,9},
		{9,7,0,0,4,0,0,1,3},
		{0,4,5,0,0,0,0,0,8},
		{0,0,2,0,0,6,0,0,0},
	};
	std::cout << "=====================" << endl;
	std::cout << "Input Board:" << endl;
	std::cout << "=====================" << endl;
	printBoard(board);

	if (!backtrack(board, 0, 0))
	{
		std::cout << "Solution Failed" << endl;
	std::cout << "=====================" << endl;
	std::cout << "Output Board:" << endl;
	std::cout << "=====================" << endl;
	printBoard(board);
	}
	else
	{
		std::cout << "=====================" << endl;
		std::cout << "Output Board:" << endl;
		std::cout << "=====================" << endl;
		printBoard(board);
	}

	std::system("cls");

	srand(time(nullptr));
	int generate[9][9] = {};
	std::cout << "=====================" << endl;
	std::cout << "Solved Randomized Board:" << endl;
	std::cout << "=====================" << endl;
	generateBoard(generate, 0, 0);
	printBoard(generate);

	createSudoku(generate, 10);
	std::cout << "=====================" << endl;
	std::cout << "Sudoku Puzzle:" << endl;
	std::cout << "=====================" << endl;
	printBoard(generate);

	if (!backtrack(generate, 0, 0))
	{
		std::cout << "Solution Failed" << endl;
		std::cout << "=====================" << endl;
		std::cout << "Sudoku Board output" << endl;
		std::cout << "=====================" << endl;
		printBoard(generate);
	}
	else
	{
		std::cout << "=====================" << endl;
		std::cout << "Sudoku Board output" << endl;
		std::cout << "=====================" << endl;
		printBoard(generate);
	}
	return 0;
}