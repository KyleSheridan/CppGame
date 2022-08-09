#pragma once

#include <SDL.h>
#include <SDL_image.h>

class Background {
public:
	Background(SDL_Renderer* renderer) : renderer(renderer) {};

	void init();
	void update();
	void draw();
	void clear();

private:
	SDL_Renderer* renderer;
	SDL_Texture* texture;

	SDL_Rect position;
};