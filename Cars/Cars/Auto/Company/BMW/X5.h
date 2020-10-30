#pragma once
#include "../BMW.h"


class X5 : public BMW
{
public:
	X5(Engine* engine) :  BMW("X5", "white", engine) {}

	void car_life_cycle() override {}
private:
};