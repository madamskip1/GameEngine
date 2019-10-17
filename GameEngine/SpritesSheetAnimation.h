#pragma once
#include <SFML/Graphics.hpp>
#include "SSA.h"
namespace Engine
{
	typedef unsigned short int usint;
	typedef short int sint;
	class SpritesSheetAnimation : public SSA
	{
		sf::Vector2i pos;
		//sf::Time speed;
		//sint loops; // how many loops
		//sint loopCounter; // loops - loopsCounter = loops to go
		//usint frames; // frames in animation
		//usint frameCounter;
		usint width, height;
		usint gap;

		//bool running;

	public:
		//static const int  INFINITY_LOOP = 0;

		SpritesSheetAnimation();
		SpritesSheetAnimation(sf::Vector2i, usint, usint, usint, sf::Time, sint = INFINITY_LOOP, usint = 0);
		~SpritesSheetAnimation();

		/*void play();
		void pause();
		void stop();
		void reset();*/

		//void nextFrame(int = 1);
		sf::IntRect getRect();
		//sf::Time getSpeed();
	};
}