#include <stdio.h>
#include "Actor.h"
#include "SpriteSheet.h"

#pragma once

class Ennemis : public Actor {
public:
	Ennemis(Vector2, Vector2);
	~Ennemis();
	void GoLeft(float);
	void GoRight(float);
	void Render(Viewport &);
	void Update(float, Keys);
	

private: 
	bool collision = false;
	bool jump = true;

	

};