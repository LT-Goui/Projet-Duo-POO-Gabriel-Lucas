#pragma once
#include <iostream>
#include "../Entity.h"
#include "../Enemies/Enemy.h"

class Player : public Entity
{

public :
	
	char name = 'H';

	void move();

	bool canPlayerPlay();
	void inputMovePlayer(char input);
	void kill() override {

	}

	using Entity::Entity;
};
