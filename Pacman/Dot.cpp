#include "Dot.h"

Dot::Dot(Vector2f aPosition, Sprite* entitySprite)
: StaticGameEntity(aPosition, entitySprite)
{
	sprite->SetFrame(entitySprite->getCurrentFrame());
}

Dot::~Dot(void)
{
}
