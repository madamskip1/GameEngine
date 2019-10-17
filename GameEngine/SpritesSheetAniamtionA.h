#pragma once
#include <vector>
#include "SSA.h"

namespace Engine
{

	struct AnimationFrame
	{
		usint width, height;
		sf::Vector2i pos;

		AnimationFrame(sf::Vector2i _pos, usint _width, usint _height) : pos(_pos), width(_width), height(_height) {}
	};

	class SpritesSheetAniamtionA :
		public SSA
	{
	private:
		std::vector<AnimationFrame> framesVector;
	public:
		SpritesSheetAniamtionA();
		SpritesSheetAniamtionA(sf::Time, sint = INFINITY_LOOP);
		~SpritesSheetAniamtionA();

		void addFrame(AnimationFrame&);
		void removeLast();
		void remove(int);
		void clear();
		sf::IntRect getRect();
	};
}