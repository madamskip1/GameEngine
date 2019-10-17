#include "SpritesSheetAnimation.h"



Engine::SpritesSheetAnimation::SpritesSheetAnimation()
{
}

Engine::SpritesSheetAnimation::SpritesSheetAnimation(sf::Vector2i pos, usint width, usint height, usint frames, sf::Time speed, sint loops, usint gap) : SSA(speed, loops)
{
	this->pos = pos;
	this->width = width;
	this->height = height;
	this->frames = frames;
	//this->speed = speed;
	//this->loops = loops;
	this->gap = gap;
}


Engine::SpritesSheetAnimation::~SpritesSheetAnimation()
{
}

//void Engine::SpritesSheetAnimation::play()
//{
//	running = true;
//}
//
//void Engine::SpritesSheetAnimation::pause()
//{
//	running = false;
//}
//
//void Engine::SpritesSheetAnimation::stop()
//{
//	pause();
//	reset();
//}
//
//void Engine::SpritesSheetAnimation::reset()
//{
//	loopCounter = 0;
//	frameCounter = 0;
//}
//
//void Engine::SpritesSheetAnimation::nextFrame(int num)
//{
//	frameCounter += num;
//
//	if (frameCounter >= frames)
//	{
//		frameCounter = 0;
//		loopCounter++;
//
//		if (loopCounter >= loops && loops != INFINITY_LOOP) running = false;
//	}
//}

sf::IntRect Engine::SpritesSheetAnimation::getRect()
{
	return sf::IntRect((pos.x + frameCounter * (width + gap)), pos.y, width, height);
}

//sf::Time Engine::SpritesSheetAnimation::getSpeed()
//{
//	return speed;
//}
