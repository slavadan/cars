#include "pch.h"
#include "../Cars/Auto/Company/BMW/X5.h"
//#include "../Cars/Auto/Component/Engine/EngineV16.h"

TEST(EngineV16Test, TestChangeFunction) {

	EngineV16 engine;

	EXPECT_FALSE(engine.get_status());
	engine.change_status();
	engine.change_status();
	EXPECT_FALSE(engine.get_status());
	engine.change_status();
	EXPECT_TRUE(engine.get_status());

}


TEST(BMW_X5_Test, Start_and_Stop_Functions)
{
	EngineV16 engine;
	X5 car(&engine);


	EXPECT_FALSE(car.get_engine_status());
	car.start_engine();
	EXPECT_TRUE(car.get_engine_status());
	car.start_engine();
	EXPECT_TRUE(car.get_engine_status());
	//EXPECT_FALSE(car.get_engine_status());
}

TEST(BMW_X5_Test, CharTests)
{
	EngineV16 engine;
	X5 car(&engine);

	ASSERT_EQ(110, car.get_engine_power());
}

TEST(BMW_X5_Test, speed_Test)
{
	EngineV16 engine;
	X5 car(&engine);

	ASSERT_EQ(210, car.get_max_speed());
	ASSERT_EQ(0, car.get_speed());
	car.accelerate(50);
	ASSERT_EQ(50, car.get_speed());
	car.accelerate(230);
	ASSERT_EQ(210, car.get_speed());
}