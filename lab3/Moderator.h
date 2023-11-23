#pragma once
#include"User.h"
class Moderator : public User {
	Social_Network social_network_;
public:
	void Set_Social_Network(Social_Network&);
	void Delete_Post(Post*, Social_Network& Network);

};