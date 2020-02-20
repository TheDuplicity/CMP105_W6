#include "ForcePhysics.h"

ForcePhysics::ForcePhysics() {
	
}
ForcePhysics::ForcePhysics(sf::RenderWindow* currentWindow) {	
	gravity = 1.f;
	drag = 1.f;
	window = currentWindow;
}
ForcePhysics::~ForcePhysics() {

}

void ForcePhysics::gravityUpdate(float dt) {
	velocity += (sf::Vector2f(0, gravity) * dt);
	if (getPosition().y + getSize().y > window->getSize().y) {
		setPosition(getPosition().x, window->getSize().y - getSize().y);
	}
	move(velocity);
}