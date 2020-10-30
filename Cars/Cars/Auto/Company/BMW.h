#pragma once
#include "../auto.h"

class BMW : public Auto
{
public:
	BMW(const std::string& model, const std::string& color, Engine* engine): 
		Auto(0, 210, color, model, engine),
		logo("BMW")
	{}

	std::string get_logo();
protected:
	std::string logo;
};