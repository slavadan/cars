#pragma once
#include "../component.h"

class Engine : public AutoComponent
{
public:
	Engine(int power, double engine_capacity) :
		_power(power),
		_status(false),
		_engine_capacity(engine_capacity),
		AutoComponent(100)
	{}

	int get_power();
	bool get_status();
	double get_capacity();

	void change_status();

protected:
	int _power;
	bool _status;
	double _engine_capacity;
};