#include "pch.h"
#include "User.h"

std::string User::Get_Password()
{
	return password_;
}

std::string User::Get_Username()
{
	return username_;
}

void User::Write_Post(Post* post, std::string text,User* user)
{
	if (authorized_)
	{
		post->Set_Text(text);
		post->Set_Author(user);
		return;
	}
	std::cout << "Sign in before writing post!" << std::endl;
}

void User::Delete_Post(Post* post,User* user,Social_Network& Network)
{
	if (post->Get_Author() == user && authorized_)
	{
		Network.Delete_Post(post);
	}
}

void User::Add_Friend(User* userone,User* usertwo) //add alert
{
	if (authorized_ && Is_Not_Blocked(usertwo) && usertwo->Is_Not_Blocked(userone))
	{
		friends_.push_back(usertwo);
		Notification* extract = new Notification(usertwo, "You have some friends to ADD!");
		usertwo->Set_Notification(extract);
	}
	
}

void User::Delete_Friend(User* user) 
{
	if (authorized_)
	{
		for (int i = 0; i < friends_.size(); i++)
		{
			if (user == friends_[i])
			{
				friends_.erase(friends_.begin() + i);
				Notification* extract = new Notification(user, "You are not friend anymore!");
				user->Set_Notification(extract);
				return;
			}
		}
	}
}

void User::Block_User(User* user)
{
	if (authorized_)
	{
		blocked_users_.push_back(user);
		Delete_Friend(user);
		
	}
	
}

void User::Delete_Blocked_User(User* user)
{
	if (authorized_)
	{
		for (int i = 0; i < blocked_users_.size(); i++)
		{
			if (user == blocked_users_[i])
			{
				blocked_users_.erase(blocked_users_.begin() + i);
				return;
			}
		}
	}
}

void User::Authorize(bool sign )
{
	authorized_ = sign;
}

Group* User::Create_Group(Social_Network& network,User* user)
{
	if (authorized_)
	{
		Group* newGroup = new Group();
		newGroup->Add_Administrator(user);
		newGroup->Add_User(user);
		network.Add_Group(newGroup);
		return newGroup;
	}
	return nullptr;
}

void User::Delete_User_From_Group(User* admin, User* user, Group* group)
{
		if (admin == group->Get_Administrator() && authorized_)
		{
			group->Delete_User(user);
		}
		std::cout << "You are not Administrator" << std::endl;
}
void User::Add_User_To_Group(User* admin, User* user, Group* group)
{

	
		if (admin == group->Get_Administrator() && authorized_)
		{
			group->Add_User(user);
		}
	
}

void User::Delete_Group(User* admin,Group* group, Social_Network& network)
{
		if (admin == group->Get_Administrator()&& authorized_)
		{
			network.Delete_Group(group);
		}
		std::cout << "You are not Administrator or are not authorized" << std::endl;
}

Chat* User::Create_Chat(Social_Network& network, User* userone,User* usertwo)
{
	if (authorized_ && Is_Friend(usertwo) && usertwo->Is_Friend(userone))
	{
		Chat* newChat = new Chat();
		network.Add_Chat(newChat);
		newChat->Add_Chatters(userone);
		userone->chats_.push_back(newChat);
		newChat->Add_Chatters(usertwo);
		usertwo->chats_.push_back(newChat);
		return newChat;
	}
	return nullptr;
}

void User::Write_Message(Chat* chat, User* to_user, std::string message)
{
	if (authorized_ && Is_Friend(to_user))
	{chat->Add_Message(to_user, message);
	}
}

void User::Read_Messages(Chat* chat, User* user)
{
	if (authorized_ && Is_Friend(user))
	{
		chat->View_Messages();
	}
}

void User::Extract_Notification()
{
	if (authorized_)
	{
		notifications_.at(notifications_.size() - 1)->View_Notification();
		delete notifications_.at(notifications_.size() - 1);
		notifications_.erase(notifications_.end());
	}
}

void User::Set_Profile(Profile* profile)
{
	user_profile_ = profile;
}

void User::Fill_Profile(std::string name, std::string surname, std::string date_of_birth, std::string about_me)
{
	user_profile_->Set_Name(name);
	user_profile_->Set_Surname(surname);
	user_profile_->Set_Date_Of_Birth(date_of_birth);
	user_profile_->Set_About_Me(about_me);
}

void User::Create_Story(std::string info)
{
	
	Story* example = new Story(info);
	delete example;
}

User::~User()
{
	delete user_profile_;
}


void User::Set_Notification(Notification* notify)
{
	notifications_.push_back(notify);
}


bool User::Is_Friend(User* user)
{
	for (int i = 0; i < friends_.size(); i++)
	{
		if (user == friends_[i])
		{
			return true;
		}
	}
	return false;
}

bool User::Is_Not_Blocked(User* user)
{
	for (int i = 0; i < blocked_users_.size(); i++)
	{
		if (user == blocked_users_[i])
		{
			return false;
		}
	}
	return true;
}
