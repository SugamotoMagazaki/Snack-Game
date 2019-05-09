#ifndef WINDOW_H
#define WINDOW_H
#include "Map.h"
#include "SFML/Graphics.hpp"
#include "Defines.h"

class mWindow {
public:
	mWindow();
	void WindowDraw(Map Object);
	Map *Mapp;
	sf::RenderWindow window;
	
	
};


#endif
