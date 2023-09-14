#pragma once
#include<algorithm>
#include<iostream>
#include<vector>
class tictactoe
{
private:
	int size;
	std::vector<std::vector<char>> arr;
	int column;
	int line_;
	bool X_or_0;
	int count = 0;
	bool gorizontal_check();
	bool frontal_check();
	bool diagonal_check();
	bool alt_diagonal_check();
	void X_or_0f();
public:
	void print();
	tictactoe(int size);
	tictactoe();
	int get_size();
	void set_size(int size);
	void choosing_place(int line_, int column);
	char get_place(int line_,int column);
	bool win_check();
	
};

