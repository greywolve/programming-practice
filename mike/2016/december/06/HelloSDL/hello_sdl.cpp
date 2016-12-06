#include <SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int main(int argc, char* args[])
{
	SDL_Window * window;
	SDL_Surface* screenSurface;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		window = SDL_CreateWindow(
			"SDL Tutorial", 
			SDL_WINDOWPOS_UNDEFINED, 
			SDL_WINDOWPOS_UNDEFINED, 
			SCREEN_WIDTH, 
			SCREEN_HEIGHT, 
			SDL_WINDOW_SHOWN);

		if (!window)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			screenSurface = SDL_GetWindowSurface(window);
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0x00));
			SDL_UpdateWindowSurface(window);
			SDL_Delay(2000);
		}
		SDL_DestroyWindow(window);
	}
	SDL_Quit();

	return 0;
}