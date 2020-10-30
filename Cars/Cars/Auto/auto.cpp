#include "auto.h"

double Auto::get_fuel()
{
	return _fuel;
}

void Auto::fill_the_car(double full_up)
{
	while (_fuel < full_up)
		_fuel += 0.5;
}

void Auto::start_engine()
{
	if (!_engine->get_status())
		_engine->change_status();
}

void Auto::stop_engine()
{
	if (_engine->get_status())
		_engine->change_status();
}

void Auto::accelerate(int up_to)
{
	while (_speed < up_to)
	{
		_speed += 1.5;
		if (_speed > _max_speed)
		{
			_speed = _max_speed;
			return;
		}
	}
}

void Auto::brake()
{
	while (_speed > 0)
	{
		_speed -= 1.5;
	}

}

bool Auto::get_engine_status()
{
	return _engine->get_status();;
}

int Auto::get_engine_power()
{
	return _engine->get_power();
}

int Auto::get_engine_durabilty()
{
	return get_engine_durabilty();
}

int Auto::get_speed()
{
	return _speed;
}

int Auto::get_max_speed()
{
	return _max_speed;
}
