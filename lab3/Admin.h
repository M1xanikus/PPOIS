#pragma once
#include"Moderator.h"
class Social_Network;
class Admin : public Moderator
{
	Social_Network social_network_;
public:
	void Set_Social_Network(Social_Network);
	void Delete_User(User*);
};

