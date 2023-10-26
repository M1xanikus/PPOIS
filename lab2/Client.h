#pragma once
#include"Person.h"
#include"Mail.h"
class Client final : public Person
{
public:
	void Pay(Mail& Mail,Post_Office& example);
	void Write_letter(Mail& example,
		std::string addressee_name_,
		std::string addressee_surname_,
		std::string addressee_patronymic_,
		std::string addressee_postcode_,
		std::string addressee_address_);
};