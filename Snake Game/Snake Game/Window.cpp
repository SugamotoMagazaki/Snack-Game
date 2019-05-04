#include <SFML/Graphics.hpp>
#include "Window.h"
#include "Map.h"
#include <iostream>

using namespace std;

Window::Window() 
{

}

void Window::WindowDraw(Map Object) 
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Snake Game");
	//for now its an error, i guess I'll just have to work on the map object to make it "drawable" for the function
	window.draw(Object);
	window.display();
	
}

