#ifndef MAP_H
#define MAP_H
#include "Snake.h"
#include "Defines.h"

class Map {
public:
	Map();
		
	
	Snake* SnakePointer;
	sf::RectangleShape lista[RectNum][RectNum];
};


#endif