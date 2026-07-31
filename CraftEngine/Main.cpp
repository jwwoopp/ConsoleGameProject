#include <iostream>
#include <Engine/Engine.h>
#include <Level/TestLevel.h>

int main()
{
	// 엔진 객체 설정 및 실행.
	Craft::Engine engine;
	engine.AddNewLevel<TestLevel>();
	engine.Run();
}

