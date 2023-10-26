#pragma once
#include"Person.h"
#include"Post_Office.h"
class Worker : public Person
{
public:
	void Set_salary(int salary);
	void Get_salary();
	int Getter_salary();
protected:
	int salary_;
};