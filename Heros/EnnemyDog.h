#pragma once

#include <stdio.h>
#include "Ennemis.h"
#include "SpriteSheet.h"

class EnnemyDog : public Ennemis {
public:
	enum AnimationState{
		RUN_RIGHT,
		RUN_LEFT
	};
	EnnemyDog(Vector2);
	~EnnemyDog();

//	void GoLeft(double); //Don't have to rewrite it
//	void GoRight(double); //Don't have to rewrite it

	void Render(Viewport &) override;
	void Update(GameScene *, double, Keys) override;

protected: //private ?
	AnimationState state_;
	double animationTime_ = 0;
	int animationIndex_ = 0;
	int animationFrames_ = 1;

	AnimationState GetAnimationState(int &frames);
};