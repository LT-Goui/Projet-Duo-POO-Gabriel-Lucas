#include "../../../Headers/Entities/Players/Mage.h"


void Mage::attack()
{
	for (int s = 0; s < sizeof(attackDirection); s++) {
		Vector2 target_position = this->position + attackDirection[s];
	}
}
