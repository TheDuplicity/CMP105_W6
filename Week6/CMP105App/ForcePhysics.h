#pragma once
#include "Framework/GameObject.h"

class ForcePhysics : public GameObject {
protected:
	float gravity;
	float drag;
	sf::RenderWindow* window;
	sf::Vector2f direction;

public:
	ForcePhysics();
	ForcePhysics(sf::RenderWindow* currentWindow);
	~ForcePhysics();
	void gravityUpdate(float dt);
};
