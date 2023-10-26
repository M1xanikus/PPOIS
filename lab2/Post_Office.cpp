#include "pch.h"
#include "Post_Office.h"
#include<iostream>
#include<string>
void Post_Office::Set_address(std::string office_address){ office_address_ = office_address; }
std::string Post_Office::Get_adress(){ return office_address_; }

void Post_Office::Set_balance(int balance) { balance_ = balance; }

int Post_Office::Get_balance() { return balance_; }

Mail* Post_Office::Get_mail(){return mail_;}

void Post_Office::Set_mail(Mail* mail) {mail_ = mail;}


