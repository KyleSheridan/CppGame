#pragma once

#include "Scene.h"
#include "Background.h"

class TestScene : public Scene {
public:
	TestScene() {};

	void init() override;
	bool input() override;
	void update() override;
	void draw() override;
	void clear() override;

private:
	Background* background;
};