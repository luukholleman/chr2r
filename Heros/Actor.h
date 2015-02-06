#include "GameObject.h"

#pragma once

class Actor : public GameObject {
public:
    Actor();
    Actor(Vector2);
	void Falling(Vector2 grav, float delta);
	Actor(Vector2 position, Vector2 size);
	virtual void EnteredCollision(GameObject *, Vector2 &);
protected:
    Vector2 velocity_;
	bool onGround;
};