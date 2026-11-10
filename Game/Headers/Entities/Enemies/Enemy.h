#pragma once
#include "../Entity.h"
#include <iostream>
class Enemy : public Entity
{
public:

	virtual Vector2 getDirectionToTarget(Vector2 target);

	//virtual void move(Map current_map, Vector2 target) override;
	//virtual void move(Map current_map, Vector2 target) = 0;

	virtual Vector2 getDirectionToTarget(Vector2 target);

	Enemy(Vector2 position) : Entity(position) {
		this->position = position;
	};

	void kill() override {
		std::cout << "ble";
	 }
};

