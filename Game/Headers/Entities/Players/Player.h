#pragma once
#include <iostream>
#include "../Entity.h"
#include "../Enemies/Enemy.h"

class Player : public Entity
{

public :
	
	void move();

	bool canPlayerPlay();
	void inputMovePlayer(char input);
	void kill() override {

	}
};
