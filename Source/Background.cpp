#include "Background.h"

#include <stdexcept>

void Background::init()
{
	try {
		SDL_Surface* surface = IMG_Load("../Assets/Space.jpg");
		texture = SDL_CreateTextureFromSurface(Renderer::GetRenderer(), surface);
		SDL_FreeSurface(surface);

		if (texture == nullptr) throw std::runtime_error("Texture error");
	}
	catch(std::exception& e) {
		std::cout << "\t" << e.what() << "\t" << IMG_GetError() << "\n";
	}
}

void Background::update()
{
}

void Background::draw()
{
	SDL_RenderCopy(Renderer::GetRenderer(), texture, 0, NULL);
}

void Background::clear()
{
	SDL_DestroyTexture(texture);
}
