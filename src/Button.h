#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>
#include "ButtonStyle.h"

using namespace sf;

class Button : public Sprite
{
	public:
		Button();
		virtual ~Button();
		void onHoverOn();
		void onHoverOff();
		void onPressed();
		void onReleased();
	protected:
	private:
		Texture texture;
		ButtonStyle style;
};

#endif // BUTTON_H
