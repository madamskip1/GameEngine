#include "SSA.h"



Engine::SSA::SSA()
{
}

Engine::SSA::SSA(sf::Time speed, sint loops)
{
	this->speed = speed;
	this->loops = loops;
}


Engine::SSA::~SSA()
{
}

void Engine::SSA::tick(int num)
{
	frameCounter += num;

	if(frameCounter >= frames)
	{
		frameCounter = 0;
		loopCounter++;


		if (loopCounter >= loops && loops != INFINITY_LOOP) running = false;
	}
}

void Engine::SSA::play()
{
	running = true;
}

void Engine::SSA::pause()
{
	running = false;
}

void Engine::SSA::stop()
{
	pause();
	reset();
}

void Engine::SSA::reset()
{
	loopCounter = 0;
	frameCounter = 0;
}

sf::Time Engine::SSA::getSpeed()
{
	return this->speed;
}
