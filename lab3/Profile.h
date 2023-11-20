#pragma once
#include<string>
class User;
class Profile
{
public:
	Profile(User* user): user_belongs_(user){}
	void Set_Name(std::string);
	std::string Get_Name();
	void Set_Surname(std::string);
	std::string Get_Surname();
	void Set_Date_Of_Birth(std::string);
	std::string Get_Date_Of_Birth();
	void Set_About_Me(std::string);
	std::string Get_About_Me();
private:
	std::string name_;
	std::string surname_;
	std::string date_of_birth_;
	std::string about_me_;
	User* user_belongs_;
};

