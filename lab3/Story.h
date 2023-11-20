#pragma once
#include<thread>
#include<chrono>
#include<string>
class User;
class Story
{
public:
	Story(std::string info) : info_(info) { Count_Down(); }
private:
	void Count_Down();
	std::string info_;
};

