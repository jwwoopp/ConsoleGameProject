#include "Player.h"

using namespace Craft;

Player::Player(const Craft::Vector2& position)
	: Actor("P", position, Color::Green)
	{
		// 우선순위 설정.
		sortingOrder = 5;
	}
