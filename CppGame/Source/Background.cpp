#include "Background.h"

void Background::init()
{
	SDL_Surface* surface = IMG_Load("Assets/Space.jpg");
	texture = SDL_CreateTextureFromSurface(Renderer::GetRenderer(), surface);
	SDL_FreeSurface(surface);
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
