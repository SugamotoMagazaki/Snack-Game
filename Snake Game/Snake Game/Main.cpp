#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Snake.h"
#include "mWindow.h"

int main()
{
	mWindow myWindow;
	Map meow;
	while (myWindow.window.isOpen())
	{
		sf::Event event;
		while (myWindow.window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				myWindow.window.close();
		}
		myWindow.WindowDraw(meow);

	}
	return 0;
}