#pragma once

#include <SDL.h>
#include <SDL_image.h>

#include "Renderer.h"

class Background {
public:
	Background() {};

	void init();
	void update();
	void draw();
	void clear();

private:
	SDL_Texture* texture;

	SDL_Rect position;
};