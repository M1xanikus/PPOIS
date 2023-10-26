#include "pch.h"
#include "Parcel.h"
void Parcel::Set_cost_per_km(int cost_per_km) { cost_per_km_ = weight_g_ * 0.05 * cost_per_km; }

int Parcel::Get_cost_per_km() { return cost_per_km_; }

void Parcel::Set_Weight(int weight) { weight_g_ = weight; }
