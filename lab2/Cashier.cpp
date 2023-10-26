#include "pch.h"
#include "Cashier.h"
#include "Mail.h"

int Cashier::Get_mail_cost(Mail& mail) { return mail.Get_cost(); }
void Cashier::Evaluate_mail_cost(Distance_between_post_office& distance, Mail& Mail)
{
	Mail.Set_cost(Mail.Get_cost_per_km() * distance.Get_distance());
}
