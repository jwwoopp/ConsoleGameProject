#include <iostream>
#include <Engine/Engine.h>
#include <Level/TestLevel.h>

int main()
{
	// // 테스트.
	// bool isTestActorChild
	// 	= std::is_base_of<Craft::Actor, TestActor>::value;
	// auto result
	// 	= std::is_base_of<Craft::Actor, Craft::Level>::value;
	// 
	// 
	// std::enable_if<true, TestActor>::type;
	// // enable_if_t 하면 type; 안붙여도 됨.
	// // enable_if<false, > false로 넣으면 컴파일 오류 생김.


	// 엔진 객체 설정 및 실행.
	Craft::Engine engine;
	engine.AddNewLevel<TestLevel>();
	engine.Run();
}