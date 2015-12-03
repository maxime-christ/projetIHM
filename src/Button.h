#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>

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
		bool hovered;
};

#endif // BUTTON_H
