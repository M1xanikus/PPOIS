#include "pch.h"
#include "Person.h"



std::string Person::Get_name() { return name_; }

std::string Person::Get_surname() { return surname_; }

std::string Person::Get_patronymic() { return patronymic_; }

void Person::Set_name(std::string name) { name_ = name; }

void Person::Set_surname(std::string surname) { surname_ = surname; }

void Person::Set_patronymic(std::string patronymic) { patronymic_ = patronymic; }

std::string Person::Get_address() {return address_;}

void Person::Set_address(std::string address) {address_ = address;}

std::string Person::Get_postcode(){return postcode_;}

void Person::Set_postcode(std::string postcode) { postcode_ = postcode; }

void Person::Set_cash(int cash) { cash_ = cash; }

int Person::Get_cash(){return cash_;}







