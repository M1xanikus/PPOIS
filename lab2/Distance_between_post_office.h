#pragma once
#include<map>	
#include<utility>
#include<ctime>
#include"Post_Office.h"

class Distance_between_post_office
{
private:
	std::map <std::pair <std::string, std::string>, int> distance_;		
	int Evaluate_random_distance();
	int distance_km_;
public:
	Distance_between_post_office(Post_Office& From, Post_Office& To);
	void Set_distance(Post_Office& From, Post_Office& To);
	int Get_distance();
};

