#include "Engine.h"

int Engine::get_power()
{
	return _power;
}

bool Engine::get_status()
{
	return _status;
}

double Engine::get_capacity()
{
	return _engine_capacity;
}

void Engine::change_status()
{
	if (_status)
		_status = false;
	else
		_status = true;
}
