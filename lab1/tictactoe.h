#pragma once
#include<algorithm>
#include<iostream>
#include<vector>
class Tictactoe
{
private:
	int field_size;
	std::vector<std::vector<char>> field;
	bool X_or_0;
	int turn_count = 0;
	bool gorizontal_check();
	bool frontal_check();
	bool diagonal_check();
	bool alt_diagonal_check();
	void switch_X_or_0();
public:
	void print();
	Tictactoe(int size);
	Tictactoe();
	int get_size();
	void set_size(int size);
	void choosing_place(int line_, int column);
	char get_place(int line_,int column);
	bool win_check();
	
};

