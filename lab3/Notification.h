#pragma once
#include"User.h"
class Notification {
public:
	Notification(User* user, std::string text) : notification_text_(text), user_(user)
	{}
	void View_Notification();
private:
	std::string notification_text_;
	User* user_;
};
