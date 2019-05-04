#include <SFML/Graphics.hpp>
#include "Update.h"
#include <iostream>
#include "Window.h"
#include "Map.h"

using namespace std;

Update::Update() 
{   
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();	
		void Window::WindowDraw();
	}
}
