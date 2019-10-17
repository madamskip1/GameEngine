#pragma once
#include <SFML/Graphics.hpp>

namespace Engine
{

	typedef unsigned short int usint;
	typedef short int sint;

	class SSA
	{
	protected:
		sf::Time speed;
		sint loops; // how many loops
		sint loopCounter; // loops - loopsCounter = loops to go
		usint frameCounter;
		usint frames;
		bool running;

	public:
		static const int  INFINITY_LOOP = 0;

		SSA();
		SSA(sf::Time, sint);
		~SSA();

		virtual sf::IntRect getRect() = 0;
		//virtual void tick(int) = 0;
		void tick(int);

		void play();
		void pause();
		void stop();
		void reset();

		sf::Time getSpeed();
	};
}