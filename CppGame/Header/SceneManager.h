#pragma once
#include "Scene.h"

class SceneManager {
public:
	SceneManager(Scene* startScene) : currentScene(startScene) {};

	void init();
	bool input();
	void update();
	void draw();
	void clear();

	void ChangeScene(Scene* newScene);

private:
	Scene* currentScene;
};