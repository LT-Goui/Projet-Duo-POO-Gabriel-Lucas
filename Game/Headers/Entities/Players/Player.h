#pragma once
#include <iostream>
#include "../Entity.h"
#include "../Enemies/Enemy.h"

class Player : public Entity
{

public :

	enum playerType
	{
		Mage,
		Warrior,
		WarriorMage,
	};
	
	char name = 'H';

	void move(Map current_map, Vector2 target) override;

	Vector2 inputMovePlayer(char input);
	void kill() override;

	using Entity::Entity;

	Player(Vector2 position) : Entity(position) {
		this->position = position;
	};


};
