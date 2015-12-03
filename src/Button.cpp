#include "Button.h"

Button::Button()
{
	texture.loadFromFile("img/button/green.png");
	texture.setSmooth(true);
	setTexture(texture);
}

Button::~Button()
{
	//dtor
}

void Button::onHoverOn()
{
	style.onHoverOn(this);
}


void Button::onHoverOff()
{
	style.onHoverOff(this);
}

void Button::onPressed()
{
	style.onPressed(this);
}

void Button::onReleased()
{
	style.onReleased(this);
}
