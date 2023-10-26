#include "pch.h"
#include "Mail.h"
void Mail::Set_cost(int cost) { cost_ = cost; }

int Mail::Get_cost() { return cost_; }

void Mail::Set_addressee_name(std::string name) { addressee_name_ = name; }

void Mail::Set_addressee_surname(std::string surname) { addressee_surname_ = surname; }

void Mail::Set_addressee_patronymic(std::string patronymic) { addressee_patronymic_ = patronymic; }

void Mail::Set_addressee_postcode(std::string postcode) { addressee_postcode_ = postcode; }

void Mail::Set_addressee_address(std::string address) { addressee_address_ = address; }

void Mail::Set_addresser_name(std::string name) { addresser_name_ = name; }

void Mail::Set_addresser_surname(std::string surname) { addresser_surname_ = surname; }

void Mail::Set_addresser_patronymic(std::string patronymic) { addresser_patronymic_ = patronymic; }

void Mail::Set_addresser_address(std::string address) { addresser_address_ = address; }

