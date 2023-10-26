#include "pch.h"
#include "Distance_between_post_office.h"


Distance_between_post_office::Distance_between_post_office(Post_Office& From, Post_Office& To)
{
distance_[std::make_pair(From.Get_adress(),To.Get_adress() )] = Evaluate_random_distance();
}

void Distance_between_post_office::Set_distance(Post_Office& From, Post_Office& To)
{
	distance_km_ =  distance_[std::make_pair(From.Get_adress(), To.Get_adress())];
}

int Distance_between_post_office::Get_distance()
{
	return distance_km_;
}

int Distance_between_post_office::Evaluate_random_distance()
{
	srand(time(NULL));
	return 10 + rand() % 991;
}
