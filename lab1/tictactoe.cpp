#include "tictactoe.h"
tictactoe::tictactoe(int size)
{
	set_size(size);
	this->X_or_0 = true;
	std::vector<char> line(size,'_');
	for (int i = 0; i < size; i++)
		arr.push_back(line);
	std::cout <<"Field was created" << std::endl;
}
tictactoe::tictactoe() : tictactoe(3) {};

int tictactoe::get_size()
{
	return size;
}

void tictactoe::set_size(int size)
{
	this->size = size;
}

void tictactoe::print()
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			std::cout << arr[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}

void tictactoe::choosing_place(int line_, int column)
{	
	count++;
	if (X_or_0 == true)		std::cout << "			X TURN" << std::endl;
	else					std::cout << "			0 TURN" << std::endl;
	this->column = column;
		if (!(column <= size - 1 && column >= 0))
		{
			std::cout <<" Your column"<< column <<" that you chose doesn't exist\n" << std::endl;
			return;
				
		}
	this->line_ = line_;
		if (!(line_ <= size - 1 && line_ >= 0))
		{
			std::cout << " Your line "<< line_ <<"that you chose doesn't exist\n" << std::endl;
			return;
		}
	if (arr[line_][column] != 'X' && arr[line_][column] != '0')
	{
		X_or_0f(); 
		return;
	}
		else std::cout << "Try again\nCell "<<this->line_ <<" "<< this->column << " you choosed is already taken" << std::endl;
}
char tictactoe::get_place(int line_,int column)
{
	return arr[line_][column];
}
void tictactoe::X_or_0f()
{
	if (X_or_0 == true)
	{
		arr[line_][column] = 'X';
		this->X_or_0 = false;
	}
	else
	{
		arr[line_][column] = '0';
		this->X_or_0 = true;
	}
}
bool tictactoe::gorizontal_check()
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{

			if (arr[i][j] == '_' || arr[i][j + 1] == '_')
				break;
			if (arr[i][j] != arr[i][j + 1])
				break;
			if (arr[i][j] == arr[i][j + 1] && j + 1 == size - 1)
			{
				std::cout <<"		" << arr[i][j] << " WON" << std::endl;
				return true;
			}
		}
	}
	return false;
}
bool tictactoe::frontal_check()
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j][i] == '_' || arr[j + 1][i] == '_')
				break;
			if (arr[j][i] != arr[j + 1][i])
				break;
			if (arr[j][i] == arr[j + 1][i] && j + 1 == size - 1)
			{
				std::cout << "		" << arr[j][i] << " WON" << std::endl;
				return true;
			}
		}
	}
	return false;
}
bool tictactoe::diagonal_check()
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i][i] == '_' || arr[i + 1][i + 1] == '_')
			return false;
		if (arr[i][i] != arr[i + 1][i + 1])
			return false;
		if (arr[i][i] == arr[i + 1][i + 1] && i + 1 == size - 1)
		{
			std::cout << "		" << arr[i][i] << " WON" << std::endl;
			return true;
		}
	}
	return false;
}
bool tictactoe::alt_diagonal_check()
{
	for (int j = size-1, i = 0; j > 0, i< size-1; j--,i++)
	{
			if (arr[i][i] == '_' || arr[i + 1][j - 1] == '_')
				return false;
			if (arr[i][j] != arr[i + 1][j - 1])
				return false;
			if (arr[i][j] == arr[i + 1][j - 1] && i + 1 == size - 1)
			{
				std::cout << "		" << arr[i][i] << " WON" << std::endl;

				return true;
			}
	}
	return false;
}
bool tictactoe::win_check()
{		
	if (gorizontal_check()) return true;
	if (frontal_check()) return true;
	if (diagonal_check()) return true;
	if (alt_diagonal_check()) return true;
	if (count == size * size)
	{
		std::cout << "		" << " DRAW" << std::endl;
		return true;
	}
}



