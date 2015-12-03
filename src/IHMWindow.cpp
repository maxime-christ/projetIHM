#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <vector>

#include "IHMWindow.h"

IHMWindow::IHMWindow(VideoMode mode, const String &title, Uint32 style, const ContextSettings &settings) : RenderWindow(mode, title, style, settings)
{

}

IHMWindow::~IHMWindow()
{
}

void IHMWindow::add(Button* b)
{
	shapeList.push_back(b);
}

void IHMWindow::update()
{
	clear();

	RectangleShape fond = RectangleShape(Vector2f(getSize().x,getSize().y));
	fond.setFillColor(Color::White);
	draw(fond);

	unsigned int i;
	for(i = 0; i < shapeList.size(); i++)
	{
		draw(*shapeList.at(i));
	}
	display();
}
