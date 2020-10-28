#include "Auto/Company/BMW/X5.h"
#include "Auto/Component/Engine/EngineV16.h"

int main()
{
	Auto* car = new X5();
	AutoComponent* engine = new EngineV16();

	return 0;
}