#pragma once
#include"User.h"
class Moderator : public User {
public:
	void Delete_Post(Post*, Social_Network& Network);

};