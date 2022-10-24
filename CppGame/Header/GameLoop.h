#pragma once

#include <SDL.h>
#include <iostream>

#include "TestScene.h"
#include "Renderer.h"

class GameLoop {
public:
	//constructor
	GameLoop();

	bool init();
	bool input();
	void update();
	void draw();
	void clear();

private:
	SDL_Window* window;

	//SDL_Event e;

	TestScene* test;
};