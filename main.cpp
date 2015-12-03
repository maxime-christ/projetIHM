#include <SFML/Graphics.hpp>
#include <iostream>

#include "IHMWindow.h"
#include "Button.h"

using namespace std;

int main()
{
    IHMWindow window(VideoMode(800, 600), "SFML works!");


    Button sprite;
    sprite.setColor(Color(0,255,0));
    sprite.scale(Vector2f(2.0f, 0.5f));

    window.add(&sprite);

    window.update();

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
			switch (event.type)
			{
				case Event::Closed :
					window.close();
					break;

				case Event::KeyPressed :
					if(event.key.code == Keyboard::Escape)
						window.close();
					break;

				case Event::MouseMoved :
					if(sprite.getGlobalBounds().contains(event.mouseMove.x, event.mouseMove.y))
						sprite.onHoverOn();
					else
						sprite.onHoverOff();
					break;

				case Event::MouseButtonPressed :
					if(sprite.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
						sprite.onPressed();
					break;

				case Event::MouseButtonReleased :
					sprite.onReleased();
					break;

				default :
					break;
			}
			window.update();

        }

//        window.clear();
//        window.draw(shape);
//        window.display();
    }

    return 0;
}
