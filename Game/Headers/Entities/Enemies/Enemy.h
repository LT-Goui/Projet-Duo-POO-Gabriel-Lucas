#pragma once
#include "../Entity.h"
#include <iostream>
class Enemy : public Entity
{
public:

	char name = 'E';

	virtual Vector2 chooseDirection(Vector2 target);

	Enemy(Vector2 position) : Entity(position) {
		this->position = position;
	};

	void kill() override {
		std::cout << "ble";
	 }
};

