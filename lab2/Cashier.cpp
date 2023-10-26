#include "pch.h"
#include "Cashier.h"
#include "Mail.h"

int Cashier::Get_mail_cost(Mail& Mail) { return Mail.Get_cost(); }
void Cashier::Evaluate_mail_cost(Distance_between_post_office& a, Mail& Mail)
{
	Mail.Set_cost(Mail.Get_cost_per_km() * a.Get_distance());
}
