#include "SpritesSheet.h"
#include <iostream>


bool Engine::SpritesSheet::loadTexture(std::string path)
{
	std::cout << path;
	if (texture.loadFromFile(path)) return true;
	return false;
}

void Engine::SpritesSheet::tick(sf::Time delta)
{
	this->delta += delta;

	sf::Time speed = actualAnimation->getSpeed();
	if (this->delta >= speed)
	{
		int tickNum = static_cast<int> (this->delta.asMicroseconds() / speed.asMicroseconds());
		//std::cout << this->delta.asMicroseconds() << " " << tickNum << std::endl;
		actualAnimation->tick(tickNum);
		sprite.setTextureRect(actualAnimation->getRect());
		this->delta -= sf::microseconds(tickNum * speed.asMicroseconds());
	}
}

void Engine::SpritesSheet::draw(sf::RenderWindow & window)
{
	window.draw(sprite);
}

Engine::SpritesSheet::SpritesSheet()
{
}

Engine::SpritesSheet::SpritesSheet(std::string texturePath)
{
	loadTexture(texturePath);
	sprite.setTexture(texture);
	actualAnimation = nullptr;
	delta = sf::Time::Zero;
}


Engine::SpritesSheet::~SpritesSheet()
{
	delete actualAnimation;
}

void Engine::SpritesSheet::addAnimation(SSA *animation, std::string key)
{
	animations[key] = animation;
}

void Engine::SpritesSheet::setScale(sf::Vector2f scale)
{
	sprite.setScale(scale);
}

bool Engine::SpritesSheet::changeAnimation(std::string key)
{
	actualAnimation = animations[key];
	return true;
}

bool Engine::SpritesSheet::isAnimation(std::string key)
{
	if (&animations[key] == &actualAnimation) return true;
	return false;
}
