#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <map>
#include "SSA.h"
#include "SpritesSheetAniamtionA.h"
#include "SpritesSheetAnimation.h"

namespace Engine
{
	class SpritesSheet
	{
	private:
		sf::Texture texture;
		sf::Sprite sprite;
		sf::Time delta;
		SSA *actualAnimation;
		std::map<std::string, SSA*> animations;

		bool loadTexture(std::string);
		
	public:
		void tick(sf::Time);
		void draw(sf::RenderWindow &);
		SpritesSheet();
		SpritesSheet(std::string);
		~SpritesSheet();

		void addAnimation(SSA*, std::string);
		void setScale(sf::Vector2f);

		bool changeAnimation(std::string);
		bool isAnimation(std::string);
	};

}