#pragma once
#include"User.h"
#include<utility>
class Chat
{
public:
	void Add_Chatters(User*);
	void Add_Message(User*, std::string);
	void View_Messages();
private:
	std::vector<User*> chatters_;	
	std::vector<std::pair <User*, std::string>> chat_;
};

