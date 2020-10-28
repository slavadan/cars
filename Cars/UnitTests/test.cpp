#include "pch.h"
#include "../Cars/Auto/Component/Engine/EngineV16.h"

TEST(EngineV16Test, TestChangeFunction) {

	EngineV16 engine;

	EXPECT_FALSE(engine.get_status());
	engine.change_status();
	engine.change_status();
	EXPECT_FALSE(engine.get_status());
	engine.change_status();
	EXPECT_TRUE(engine.get_status());

}