#include "pch.h"
#include "Profile.h"

void Profile::Set_Name(std::string name)
{
	name_ = name;
}

std::string Profile::Get_Name()
{
	return name_;
}

void Profile::Set_Surname(std::string surname)
{
	surname_ = surname;
}

std::string Profile::Get_Surname()
{
	return surname_;
}

void Profile::Set_Date_Of_Birth(std::string date_of_birth)
{
	date_of_birth_ = date_of_birth;
}

std::string Profile::Get_Date_Of_Birth()
{
	return date_of_birth_;
}

void Profile::Set_About_Me(std::string about_me)
{
	about_me_ = about_me;
}

std::string Profile::Get_About_Me()
{
	return about_me_;
}
