#pragma once

#include <SDL.h>
#include <iostream>

#include "TestScene.h"
#include "Renderer.h"
#include "SceneManager.h"

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
	//SDL_Event e;

	SceneManager* sceneManager;
};