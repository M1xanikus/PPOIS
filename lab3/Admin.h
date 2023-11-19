#pragma once
#include"Moderator.h"
class Admin : public Moderator
{
public:
	void Delete_User(User*,Social_Network&);
};

