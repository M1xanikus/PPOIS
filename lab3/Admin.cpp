#include "pch.h"
#include "Admin.h"

void Admin::Delete_User(User* user, Social_Network& network)
{
	network.Delete_User(user);
}
