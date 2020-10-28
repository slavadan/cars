#pragma once
#include "../BMW.h"

class X5 : public BMW
{
public:
	X5() :  BMW("X5", "white") {}

	void car_life_cycle() override {}
private:
};