#ifndef SNAKE_H
#define SNAKE_H
#include <vector>
#include <stdlib.h>
#include "SFML/Graphics.hpp"
using namespace std;
using namespace sf;
class Snake{
public:
	Snake();
	void Move(int x, int y);
	vector<Vector2f> body;
};


#endif