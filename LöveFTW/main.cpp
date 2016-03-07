#include <SDL.h>

int main(int argc, char **argv)
{
	SDL_DisplayMode mode;
	SDL_Window * window = NULL;
	SDL_Renderer * renderer = NULL;
	SDL_Event evt;

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		return 1;
	}

	if (SDL_GetCurrentDisplayMode(0, &mode) != 0) {
		return 1;
	}

	if (SDL_CreateWindowAndRenderer(mode.w, mode.h, SDL_WINDOW_FULLSCREEN, &window, &renderer) != 0) {
		return 1;
	}

	while (1) {
		while (SDL_PollEvent(&evt)) {

		}

		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}
}

