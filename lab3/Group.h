#pragma once
#include"User.h"
class Group
{
public:
	void Add_User(User*);
	void Delete_User(User*);
	void Add_Administrator(User*);
	User* Get_Administrator();
private:
	std::vector<User*> users;
	std::vector<Post*> posts;
	User* administrator_;
};

