#pragma once
#include"Mail.h"
class Letter final : public Mail
{
public:

	void Set_cost_per_km(int cost_per_km) override;
	int Get_cost_per_km() override;
private:
	int cost_per_km_;

};