#pragma once
#include <SFML/Graphics.hpp>

namespace Engine
{
	const unsigned int FRAMERATE = 60; // Max framerate

	class Game
	{
	private:
		
		sf::RenderWindow window;
		sf::Clock clock;
		float timeStep;

		void init();
		void loop();
	public:
		Game();
		~Game();
	};

}