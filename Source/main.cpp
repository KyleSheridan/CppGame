#define SDL_MAIN_HANDLED

#include "GameLoop.h"
#include <SDL.h>

GameLoop* gameLoop;

int main(int argc, char* args[]) {
	//construct a gameloop object
	gameLoop = new GameLoop();
	if (!gameLoop->init()) {
		return 1;
	}

	while (gameLoop->input()) {
		gameLoop->update();
		gameLoop->draw();

		SDL_Delay(16);
	}

	gameLoop->clear();

	delete gameLoop;
	return 0;
}