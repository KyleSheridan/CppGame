#include "GameLoop.h"

GameLoop::GameLoop()
{
}

bool GameLoop::init()
{
	bool renderer = Renderer::InitializeRenderer();

	test = new TestScene();
	test->init();

	return renderer;
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
	SDL_RenderClear(Renderer::GetRenderer());

	test->draw();

	SDL_RenderPresent(Renderer::GetRenderer());
}

void GameLoop::clear()
{
	test->clear();
}
