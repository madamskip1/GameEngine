#include "SpritesSheetAniamtionA.h"
#include <iostream>


Engine::SpritesSheetAniamtionA::SpritesSheetAniamtionA()
{
}

Engine::SpritesSheetAniamtionA::SpritesSheetAniamtionA(sf::Time speed, sint loops) : SSA(speed, loops)
{
}


Engine::SpritesSheetAniamtionA::~SpritesSheetAniamtionA()
{
}

void Engine::SpritesSheetAniamtionA::addFrame(AnimationFrame & frame)
{
	framesVector.push_back(frame);
	++frames;
}

void Engine::SpritesSheetAniamtionA::removeLast()
{
	framesVector.pop_back();
	--frames;
}

void Engine::SpritesSheetAniamtionA::remove(int index)
{
	if (index < 0 || index >= framesVector.size()) return;
	framesVector.erase(framesVector.begin() + index);
	--frames;
}

void Engine::SpritesSheetAniamtionA::clear()
{
	framesVector.clear();
	frames = 0;
}

sf::IntRect Engine::SpritesSheetAniamtionA::getRect()
{
//	std::cout << "getRect() " << frameCounter << std::endl;
	AnimationFrame frame = framesVector[frameCounter];
	return sf::IntRect(frame.pos.x, frame.pos.y, frame.width, frame.height);
}
