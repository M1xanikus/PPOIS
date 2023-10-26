#pragma once
#include"Mail.h"
class Parcel final : public Mail
{
public:

	void Set_cost_per_km(int cost_per_km) override;
	int Get_cost_per_km() override;
	void Set_Weight(int weight);
private:
	int cost_per_km_;
	int weight_g_;
};


