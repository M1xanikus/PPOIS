#pragma once
#include"Worker.h"
#include"Distance_between_post_office.h"
class Cashier final : public Worker
{
public:
	void Evaluate_mail_cost(Distance_between_post_office& Distance, Mail& mail);
	int Get_mail_cost(Mail& mail);
};
