#include "pch.h"
#include "Profile.h"

void Profile::Set_Name(std::string name)
{
	name_ = name;
}

void Profile::Set_Surname(std::string surname)
{
	surname_ = surname;
}

void Profile::Set_Date_Of_Birth(std::string date_of_birth)
{
	date_of_birth_ = date_of_birth;
}

void Profile::Set_About_Me(std::string about_me)
{
	about_me_ = about_me;
}
