#pragma once
#include <SDL.h>

class Scene {
public:
	//constructor
	Scene(SDL_Renderer* renderer) : renderer(renderer) {}
	//initialisation
	virtual void init() = 0;
	//process input
	virtual bool input() = 0;
	//update
	virtual void update() = 0;
	//draw
	virtual void draw() = 0;
	//clear
	virtual void clear() = 0;

	bool getKeyDown(int keyCode) {
		if (keyCode > 0 && keyCode < 512) {
			return keyDown[keyCode];
		}

		return false;
	}

protected:
	SDL_Renderer* renderer;
	SDL_Event e;

	bool keyDown[512];
};