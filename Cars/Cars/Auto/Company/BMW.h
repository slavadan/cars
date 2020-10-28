#pragma once
#include "../auto.h"

class BMW : public Auto
{
public:
	BMW(const std::string& model, const std::string& color): 
		Auto(0, 210, color, model),
		logo("BMW")
	{}

	std::string get_logo();
protected:
	std::string logo;
};