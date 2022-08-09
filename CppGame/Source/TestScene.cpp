#include "TestScene.h"

void TestScene::init()
{
	background = new Background(this->renderer);
	background->init();
}

bool TestScene::input()
{
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) {
			return false;
		}
	}

	return true;
}

void TestScene::update()
{
}

void TestScene::draw()
{
	background->draw();
}

void TestScene::clear()
{
	background->clear();
	if (background) {
		delete background;
		background = nullptr;
	}
}
