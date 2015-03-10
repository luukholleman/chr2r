#pragma once

#include <vector>

#include "Vector2.h"
#include "Viewport.h"
#include "Keys.h"
#include "LevelManager.h"

class GameScene;

class GameObject {
public:
    /* Constructors */
    GameObject();
    GameObject(bool isSolid);
	GameObject(Vector2 position, Vector2 size);
    GameObject(bool isSolid, Vector2 pos, Vector2 size);

    /* Getters */
	Vector2 Position() const {
		return position_;
	}
	Vector2 Velocity() const {
		return velocity_;
	}
	Vector2 Size() const {
		return size_;
	}
    bool IsSolid() const {
        return isSolid_;
    }
    bool IsOnGround() const {
        return onGround_;
    }
	
    /* Game logic */
    virtual void Update(GameScene *, double, Keys) = 0;
	virtual void Render(Viewport &) = 0;

    /* Positioning */
    virtual void ApplyVelocity(double);

    /* Collision */
    bool IsCollidingWith(GameObject *, double);
    void CheckForCollisions(GameScene *, LevelLayer *, double);
    virtual void EnteredCollision(GameScene *, GameObject *, Vector2);
	void ClearStates();
protected:
	Vector2 position_;
    Vector2 velocity_;
    Vector2 size_;
    bool isSolid_ = true;

private:
    bool onGround_ = false;
};