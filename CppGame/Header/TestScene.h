#pragma once

#include "Scene.h"
#include "Background.h"

class TestScene : public Scene {
public:
	TestScene(SDL_Renderer* renderer) : Scene(renderer) {};

	void init() override;
	bool input() override;
	void update() override;
	void draw() override;
	void clear() override;

private:
	Background* background;
};