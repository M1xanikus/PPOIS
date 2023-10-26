#pragma once
#include"Worker.h"
class Deliverer final : public Worker
{
public:
	void Deliver(Post_Office& From, Post_Office& To);
};