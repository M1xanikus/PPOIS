#pragma once
#include<iostream>
#include"Profile.h"
#include"User.h"
#include"Post.h"
#include"Group.h"
#include"Chat.h"
class Social_Network
{
private:
	std::vector<Group*> groups_;
	std::vector<User*> users_;
	std::vector<Post*> posts_;
	std::vector<Chat*> chats_;
public:
	User* RegisterUser(std::string username, std::string password,Social_Network example);
	bool CheckPassword(std::string password);
	User* Login(std::string username, std::string password);
	User* Logout(User*);
	void Add_Group(Group*);
	void Add_Post(Post*);
	void Add_Chat(Chat*);
	void Delete_Chat(Chat*);
	void Delete_Group(Group*);
	void Delete_Post(Post*);
	void Delete_User(User*);
	~Social_Network();
};

