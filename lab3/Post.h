#pragma once
#include"User.h"
#include<string>
#include<vector>
class Post
{public:
	void Set_Text(std::string text);
	void Set_Author(User*);
	User* Get_Author();
private:
	std::string text_;
	User* author_;
};
