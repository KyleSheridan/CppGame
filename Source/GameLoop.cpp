#include "GameLoop.h"

GameLoop::GameLoop()
{
}

bool GameLoop::init()
{
	bool renderer = Renderer::InitializeRenderer();

	sceneManager = new SceneManager(new TestScene());
	sceneManager->init();

	return renderer;
}

bool GameLoop::input()
{
	bool running;

	running = sceneManager->input();

	return running;
}

void GameLoop::update()
{
	sceneManager->update();
}

void GameLoop::draw()
{
	SDL_RenderClear(Renderer::GetRenderer());

	sceneManager->draw();

	SDL_RenderPresent(Renderer::GetRenderer());
}

void GameLoop::clear()
{
	sceneManager->clear();
	if (sceneManager) {
		delete sceneManager;
		sceneManager = nullptr;
	}
}
