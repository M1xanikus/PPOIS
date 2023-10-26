#pragma once
#include<iostream>
#include<string>
#include "Person.h"

class Mail;

class Post_Office
{
private:
	std::string office_address_;
	Mail* mail_;
	int balance_;
public:
	Post_Office(std::string office_address) : office_address_(office_address){}
	Post_Office() = default;
	void Set_balance(int balance);
	int Get_balance();
	void Set_address(std::string office_address);
	std::string Get_adress();
	void Set_mail(Mail* mail);
	Mail* Get_mail();
};


