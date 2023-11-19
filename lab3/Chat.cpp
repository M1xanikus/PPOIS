#include "pch.h"
#include "Chat.h"

void Chat::Add_Chatters(User* person)
{
	chatters_.push_back(person);
}

void Chat::Add_Message(User* user, std::string message)
{
	std::pair<User*, std::string> example(user,message);
	chat_.push_back(example);
}

void Chat::View_Messages()
{
	for (int i = 0; i < chat_.size(); i++)
	{
		std::cout << chat_[i].first->Get_Username() << ": " << chat_[i].second << std::endl;
	}
}
