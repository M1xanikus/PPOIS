#include "pch.h"
#include "Story.h"

void Story::Count_Down()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(5));//hours
	
}
