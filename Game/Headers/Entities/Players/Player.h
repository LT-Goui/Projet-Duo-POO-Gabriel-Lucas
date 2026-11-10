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
		Count
	};
	
	char name = 'H';

	void move(Map current_map, Vector2 target) override;

	playerType current_type = playerType::Count;

	std::vector<Vector2> attackDirection = { Vector2{0,0} };


	Vector2 inputMovePlayer(char input);
	void kill() override;

	using Entity::Entity;

	Player(Vector2 position);;


};
