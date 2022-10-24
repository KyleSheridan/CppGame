#include "SceneManager.h"

void SceneManager::init()
{
	currentScene->init();
}

bool SceneManager::input()
{
	bool result = currentScene->input();

	return result;
}

void SceneManager::update()
{
	currentScene->update();
}

void SceneManager::draw()
{
	currentScene->draw();
}

void SceneManager::clear()
{
	currentScene->clear();
	if (currentScene) {
		delete currentScene;
		currentScene = nullptr;
	}
}

void SceneManager::ChangeScene(Scene* newScene)
{
	clear();

	currentScene = newScene;
}
