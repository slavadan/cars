#pragma once

class AutoComponent
{
public:
	AutoComponent(int durability) : 
		_durability(durability)
	{}

	virtual void component_life_cycle() = 0;
	int get_durability();

protected:
	int _durability;
};
