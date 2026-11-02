#pragma once


class Swimmer : Entity
{
public:
	bool canMove(Map current_map, Vector2 direction) override;
};

