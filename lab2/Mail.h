#pragma once
#include<string>
#include"Person.h"
#include"Post_Office.h"
class Mail
{
public:
	virtual void Set_cost_per_km(int cost_per_km) = 0;
	virtual int Get_cost_per_km() = 0;
	void Set_cost(int cost);
	int Get_cost();
	void Set_addressee_name(std::string name);
	void Set_addressee_surname(std::string surname);
	void Set_addressee_patronymic(std::string patronymic);
	void Set_addressee_postcode(std::string postcode);
	void Set_addressee_address(std::string address);

	void Set_addresser_name(std::string name);
	void Set_addresser_surname(std::string surname);
	void Set_addresser_patronymic(std::string patronymic);
	void Set_addresser_address(std::string address);
protected:
	int cost_;
	std::string addressee_name_;
	std::string addressee_surname_;
	std::string addressee_patronymic_;
	std::string addressee_postcode_;
	std::string addressee_address_;

	std::string addresser_address_;
	std::string addresser_name_;
	std::string addresser_surname_;
	std::string addresser_patronymic_;
};



