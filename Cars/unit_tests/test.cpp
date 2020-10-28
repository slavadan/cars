#include "pch.h"
#include "../Cars/Auto/Component/Engine/EngineV16.h"

TEST(TestCaseName, TestName) {
  
	EngineV16 engine;

	EXPECT_FALSE(engine.get_status());

}