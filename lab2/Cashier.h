#pragma once
#include"Worker.h"
#include"Distance_between_post_office.h"
class Cashier final : public Worker
{
public:
	void Evaluate_mail_cost(Distance_between_post_office& a, Mail& Mail);
	int Get_mail_cost(Mail& Mail);
};
