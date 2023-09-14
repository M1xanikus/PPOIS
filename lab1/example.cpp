#include<iostream>
#include"tictactoe.h"
#include<vector>
using namespace std;
void main()
{
	Tictactoe test;
	test.choosing_place(1, 1);//x
	test.choosing_place(2, 0);//0
	test.choosing_place(0, 1);//x
	test.choosing_place(2, 1);//0
	test.choosing_place(2, 2);//x
	test.choosing_place(0, 0);//0
	test.choosing_place(1, 0);//x
	test.choosing_place(1, 2);//0
	test.choosing_place(0, 2);//x
	test.print();
	test.win_check();
}
