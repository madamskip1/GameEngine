#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"
#include "SpritesSheet.h"

int main()
{
	Engine::SpritesSheet hitsugaya("trump_run.png");
	hitsugaya.setScale(sf::Vector2f(2.0, 2.0));
	Engine::SpritesSheetAnimation *ice = new Engine::SpritesSheetAnimation(sf::Vector2i(0, 100), 100, 100, 6, sf::seconds(0.1), Engine::SpritesSheetAnimation::INFINITY_LOOP, 0);
	hitsugaya.addAnimation(ice, "ice");
	hitsugaya.changeAnimation("ice");

	//Engine::SpritesSheet* hitsugaya = new Engine::SpritesSheet("strike.png");
	//hitsugaya->setScale(sf::Vector2f(2.0, 2.0));
	//Engine::SpritesSheetAniamtionA *strike = new Engine::SpritesSheetAniamtionA(sf::seconds(0.1));
	//Engine::AnimationFrame frame1(sf::Vector2i(202, 248), 35, 49);
	//strike->addFrame(frame1);
	//Engine::AnimationFrame frame2(sf::Vector2i(237, 297), 154, 49);
	//strike->addFrame(frame2);
	//hitsugaya->addAnimation(strike, "strike");

	//hitsugaya->changeAnimation("strike");

	//Engine::SpritesSheetAniamtionA *fullPower = new Engine::SpritesSheetAniamtionA(sf::seconds(0.15));
	//Engine::AnimationFrame full1(sf::Vector2i(244, 53), 66, 60);
	//fullPower->addFrame(full1);
	//Engine::AnimationFrame full2(sf::Vector2i(314, 53), 66, 60);
	//fullPower->addFrame(full2);
	//Engine::AnimationFrame full3(sf::Vector2i(382, 53), 68, 60);
	//fullPower->addFrame(full3);
	//hitsugaya->addAnimation(fullPower, "fullpower");
	//hitsugaya->changeAnimation("fullpower");

	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape(100);
	shape.setFillColor(sf::Color::Green);

	sf::Clock clock;
	clock.restart();
	sf::Time delta;

	while (window.isOpen())
	{
		
		delta = clock.getElapsedTime();
		std::cout << delta.asSeconds() << std::endl;
		clock.restart();
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}
		window.clear();
		hitsugaya.tick(delta);
		hitsugaya.draw(window);
		//window.draw(shape);
		window.display();
	}

	return 0;
}
