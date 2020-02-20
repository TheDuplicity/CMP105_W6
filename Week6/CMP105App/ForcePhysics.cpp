#include "ForcePhysics.h"
#include "Framework/Vector.h"

ForcePhysics::ForcePhysics() {
	
}
ForcePhysics::ForcePhysics(sf::RenderWindow* currentWindow) {
	direction = velocity;
	gravity = 10.f;
	drag = 0.5f;
	window = currentWindow;
}
ForcePhysics::~ForcePhysics() {

}

void ForcePhysics::gravityUpdate(float dt) {

	setPosition(getPosition() + sf::Vector2f(velocity.x ,velocity.y * dt + 0.5 * gravity * dt * dt));

	velocity += (sf::Vector2f(0, gravity) * dt);

	if (getPosition().y + getSize().y > window->getSize().y) {
		setPosition(getPosition().x, window->getSize().y - getSize().y);
		velocity.y = 0;
	}
	//move(velocity);
}