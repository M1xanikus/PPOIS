#pragma once
#include"User.h"
class Profile
{
public:
	Profile(User* user): user_belongs_(user){}
	void Set_Name(std::string);
	void Set_Surname(std::string);
	void Set_Date_Of_Birth(std::string);
	void Set_About_Me(std::string);
private:
	std::string name_;
	std::string surname_;
	std::string date_of_birth_;
	std::string about_me_;
	User* user_belongs_;
};

