#pragma once
#include <string>
#include "Component/Engine/EngineV16.h"

class Auto
{
public:
	Auto(int speed, int max_speed, const std::string& color, const std::string& model, Engine* engine) :
		_speed(speed),
		_max_speed(max_speed),
		_color(color),
		_model(model),
		_engine(engine),
		_fuel(50){}
	
	virtual void car_life_cycle() = 0;

	double get_fuel();
	void fill_the_car(double full_up);

	void start_engine();
	void stop_engine();

	void accelerate(int up_to);
	void brake();
	
	bool get_engine_status();
	int get_engine_power();
	int get_engine_durabilty();

	int get_speed();
	int get_max_speed();

	~Auto(){}
protected:

	int _speed;
	int _max_speed;
	double _fuel;
	std::string _color;
	std::string _model;
	Engine *_engine;
};