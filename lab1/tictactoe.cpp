#include "tictactoe.h"
#include<algorithm>
Tictactoe::Tictactoe(int size)
{
	set_size(size);
	this->X_or_0 = true;
	std::vector<char> line(size,'_');
	for (int i = 0; i < size; i++)
		field.push_back(line);
	std::cout <<"Field was created" << std::endl;
}

Tictactoe::Tictactoe() : Tictactoe(3){}


int Tictactoe::get_size()
{
	return field_size;
}

void Tictactoe::set_size(int size)
{
	this->field_size = size;
}

void Tictactoe::print()
{
	for (int i = 0; i < field.size(); i++)
	{
		for (int j = 0; j < field.size(); j++)
		{
			std::cout << field[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}

void Tictactoe::choosing_place(int line_, int column)
{	
	turn_count++;
	if (X_or_0)		std::cout << "			X TURN" << std::endl;
	else					std::cout << "			0 TURN" << std::endl;
		if (!(column <= field_size - 1 && column >= 0))
		{
			std::cout <<" Your column"<< column <<" that you chose doesn't exist\n" << std::endl;
			return;
				
		}
		if (!(line_ <= field_size - 1 && line_ >= 0))
		{
			std::cout << " Your line "<< line_ <<"that you chose doesn't exist\n" << std::endl;
			return;
		}
	if (field[line_][column] != 'X' && field[line_][column] != '0')
	{
		if (X_or_0)  field[line_][column] = 'X';
		else field[line_][column] = '0';
		switch_X_or_0();
		return;
	}
		else std::cout << "Try again\nCell "<<line_ <<" "<< column << " you choosed is already taken" << std::endl;
}
char Tictactoe::get_place(int line_,int column)
{
	return field[line_][column];
}
void Tictactoe::switch_X_or_0()
{
	if (X_or_0) this->X_or_0 = false;
	else this->X_or_0 = true;
}
bool Tictactoe::gorizontal_check()
{
	for (int i = 0; i < field_size ; i++)
	{
		for (int j = 0; j < field_size - 1; j++)
		{

			if (field[i][j] == '_' || field[i][j + 1] == '_')
				break;
			if (field[i][j] != field[i][j + 1])
				break;
			if (field[i][j] == field[i][j + 1] && j + 1 == field_size - 1)
			{
				std::cout <<"		" << field[i][j] << " WON" << std::endl;
				return true;
			}
		}
	}
	return false;
}
bool Tictactoe::frontal_check()
{
	for (int i = 0; i < field_size ; i++)
	{
		for (int j = 0; j < field_size - 1; j++)
		{
			if (field[j][i] == '_' || field[j + 1][i] == '_')
				break;
			if (field[j][i] != field[j + 1][i])
				break;
			if (field[j][i] == field[j + 1][i] && j + 1 == field_size - 1)
			{
				std::cout << "		" << field[j][i] << " WON" << std::endl;
				return true;
			}
		}
	}
	return false;
}
bool Tictactoe::diagonal_check()
{
	for (int i = 0; i < field_size - 1; i++)
	{
		if (field[i][i] == '_' || field[i + 1][i + 1] == '_')
			return false;
		if (field[i][i] != field[i + 1][i + 1])
			return false;
		if (field[i][i] == field[i + 1][i + 1] && i + 1 == field_size - 1)
		{
			std::cout << "		" << field[i][i] << " WON" << std::endl;
			return true;
		}
	}
	return false;
}
bool Tictactoe::alt_diagonal_check()
{
	for (int j = field_size -1, i = 0; j > 0, i< field_size -1; j--,i++)
	{
			if (field[i][i] == '_' || field[i + 1][j - 1] == '_')
				return false;
			if (field[i][j] != field[i + 1][j - 1])
				return false;
			if (field[i][j] == field[i + 1][j - 1] && i + 1 == field_size - 1)
			{
				std::cout << "		" << field[i][i] << " WON" << std::endl;

				return true;
			}
	}
	return false;
}
bool Tictactoe::win_check()
{		
	if (gorizontal_check()) return true;
	if (frontal_check()) return true;
	if (diagonal_check()) return true;
	if (alt_diagonal_check()) return true;
	if (turn_count == field_size * field_size)
	{
		std::cout << "		" << " DRAW" << std::endl;
		return true;
	}
}



