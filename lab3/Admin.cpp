#include "pch.h"
#include "Admin.h"

void Admin::Set_Social_Network(Social_Network network)
{
	social_network_ = network;
}

void Admin::Delete_User(User* user)
{
	social_network_.Delete_User(user);
}
