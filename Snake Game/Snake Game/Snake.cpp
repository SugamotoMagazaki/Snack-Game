#include <SFML/Graphics.hpp>
#include "Snake.h"
#include "Map.h"
#include <iostream>

using namespace std;

Snake::Snake() 
{
	
	body.push_back(Vector2f(RectNum/2,RectNum/2));

}
void Snake::Move(int x, int y) {
	body[0].x += x;
	body[0].y += y;
	for (int i = body.size(); body.size()>0; i--) {
		body[i].x = body[i - 1].x;
		body[i].y = body[i - 1].y;
	}
}

