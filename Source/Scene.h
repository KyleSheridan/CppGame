#pragma once
#include <SDL.h>

class Scene {
public:
	//constructor
	Scene() {}

	virtual void init() = 0;
	virtual bool input() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual void clear() = 0;

	bool getKeyDown(int keyCode) {
		if (keyCode > 0 && keyCode < 512) {
			return keyDown[keyCode];
		}

		return false;
	}

protected:
	SDL_Event e;

	bool keyDown[512];
};