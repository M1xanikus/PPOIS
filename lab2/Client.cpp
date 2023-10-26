#include "pch.h"
#include "Client.h"
void Client::Write_letter(Mail& example, std::string addressee_name_,
	std::string addressee_surname_,
	std::string addressee_patronymic_,
	std::string addressee_postcode_,
	std::string addressee_address_)
{
	example.Set_addressee_name(addressee_name_);
	example.Set_addressee_surname(addressee_surname_);
	example.Set_addressee_patronymic(addressee_patronymic_);
	example.Set_addressee_address(addressee_address_);
	example.Set_addressee_postcode(addressee_postcode_);
	example.Set_addresser_name(Get_name());
	example.Set_addresser_surname(Get_surname());
	example.Set_addresser_patronymic(Get_patronymic());
	example.Set_addresser_address(Get_address());

}

void Client::Pay(Mail& Mail,Post_Office& example) 
{
	if (Mail.Get_cost() > cash_)
	{
		std::cout << "You don't have enough money to pay for the mail delivery";
		return;
	}
	cash_ = cash_ - Mail.Get_cost();
	example.Set_balance(example.Get_balance() + Mail.Get_cost());
}