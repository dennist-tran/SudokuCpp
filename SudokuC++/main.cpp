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
	cout << "=====================" << endl;
	cout << "Original Board:" << endl;
	cout << "=====================" << endl;
	printBoard(board);
	cout << endl;

	backtrack(board, 0, 0);
	cout << "=====================" << endl;
	cout << "Solved Board:" << endl;
	cout << "=====================" << endl;
	printBoard(board);
	return 0;
}