#include <SFML/Graphics.hpp>
#include "mWindow.h"
#include "Map.h"
#include <iostream>

using namespace std;

mWindow::mWindow() 
{
	window.create(sf::VideoMode(Window_Size, Window_Size), "Snack Game!");
}



void mWindow::WindowDraw(Map Object) 
{
	
	window.clear();
	for (int i = 0; i < 0; i++) {
		for (int z = 0; z < 0; z++) {
			window.draw(Mapp->lista[z][i]);
		}
	}
	window.display();
	
}

