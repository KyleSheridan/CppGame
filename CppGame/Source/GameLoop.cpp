#include "GameLoop.h"

GameLoop::GameLoop()
{
}

bool GameLoop::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "Could not initialise SDL: " << SDL_GetError();
		return false;
	}

	// initialise ttf  if (TTF_Init() < 0)

	//create window
	window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 768, SDL_WINDOW_SHOWN);

	if (!window) {
		std::cout << "Could not create window: " << SDL_GetError();
		return false;
	}

	//create renderer
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	if (!renderer) {
		std::cout << "Could not create renderer: " << SDL_GetError();
	}

	test = new TestScene(this->renderer);
	test->init();

	return true;
}

bool GameLoop::input()
{
	bool running;

	running = test->input();

	return running;
}

void GameLoop::update()
{
	test->update();
}

void GameLoop::draw()
{
	SDL_RenderClear(renderer);

	test->draw();

	SDL_RenderPresent(renderer);
}

void GameLoop::clear()
{
	test->clear();
}
