#pragma once
#include <string>

class Auto
{
public:
	Auto(int speed, int max_speed, const std::string& color, const std::string& model) :
		_speed(speed), 
		_max_speed(max_speed),
		_color(color), 
		_model(model)
	{}
	
	virtual void car_life_cycle() = 0;
protected:

	int _speed;
	int _max_speed;
	std::string _color;
	std::string _model;
};