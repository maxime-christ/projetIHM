#include "Button.h"

#include <iostream>
using namespace std;

Button::Button()
{
	texture.loadFromFile("img/button/green.png");
	texture.setSmooth(true);
	setTexture(texture);
	hovered = false;
}

Button::~Button()
{
	//dtor
}

void Button::onHoverOn()
{
	if(!hovered)
	{
		setColor(Color::Red);
		hovered=true;
	}
}


void Button::onHoverOff()
{
	if(hovered)
	{
		setColor(Color::Green);
		hovered = false;
	}

}

void Button::onPressed()
{
	setColor(Color(0,0,255));
}

void Button::onReleased()
{
	setColor(Color::Red);
}
