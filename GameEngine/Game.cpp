#include "Game.h"



void Engine::Game::init()
{

}

void Engine::Game::loop()
{
	while (true)
	{
		timeStep = clock.getElapsedTime().asSeconds();
		clock.restart();
	}
}

Engine::Game::Game()
{
}


Engine::Game::~Game()
{
}
