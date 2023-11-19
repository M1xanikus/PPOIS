#include "pch.h"
#include "Group.h"

void Group::Add_User(User* user)
{
	users.push_back(user);
}


void Group::Delete_User(User* user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (user ==  users[i])
		{
			users.erase(users.begin() + i);
			return;
		}
	}
}

void Group::Add_Administrator(User* user)
{
	administrator_ = user;
}

User* Group::Get_Administrator()
{
	return administrator_;
}
