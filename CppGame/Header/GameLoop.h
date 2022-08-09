#pragma once

#include <SDL.h>
#include <iostream>

class GameLoop {
public:
	//constructor
	GameLoop();
	//initialisation
	bool init();
	//process input
	bool input();
	//update
	void update();
	//draw
	void draw();
	//clear
	void clear();

private:

};