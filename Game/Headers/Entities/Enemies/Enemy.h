#pragma once
#include "../Entity.h"
#include <iostream>
class Enemy : public Entity
{
public:
	using Entity::Entity;
	virtual Vector2 chooseDirection(Vector2 target);
	void kill() override {
		std::cout << "ble";
	 }
};

