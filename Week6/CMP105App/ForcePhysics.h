#pragma once
#include "Framework/GameObject.h"

class ForcePhysics : public GameObject {
protected:
	float gravity;
	float drag;
	sf::RenderWindow* window;

public:
	ForcePhysics();
	ForcePhysics(sf::RenderWindow* currentWindow);
	~ForcePhysics();
	void gravityUpdate(float dt);
};
