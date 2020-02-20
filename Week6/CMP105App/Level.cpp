#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	ballGravity = new ForcePhysics(window);
	// initialise game objects

	ballGravity->setPosition(window->getSize().x/2, window->getSize().y/10);
	ballGravity->setSize(sf::Vector2f(100,100));
	ballGravity->setFillColor(sf::Color::Blue);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	ballGravity->gravityUpdate(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(*ballGravity);

	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}