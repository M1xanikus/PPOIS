#pragma once
#include<iostream>
#include<string>

class Person
{
public: 
	std::string Get_name();
	void Set_name(std::string name);
	std::string Get_surname();
	void Set_surname(std::string surname);
	std::string Get_patronymic();
	void Set_patronymic(std::string patronymic);
	std::string Get_address();
	void Set_address(std::string address);
	std::string Get_postcode();
	void Set_postcode(std::string postcode);
	void Set_cash(int cash);
	int Get_cash();
protected:	
	int cash_;
	std::string name_;
	std::string surname_;
	std::string patronymic_;
	std::string address_;
	std::string postcode_;
};




