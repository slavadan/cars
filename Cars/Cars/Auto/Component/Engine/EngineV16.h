#pragma once
#include "../Engine.h"

class EngineV16 :public Engine
{
public:
	EngineV16(): Engine(110, 1.6)
	{}

	void component_life_cycle() override {}
private:
};