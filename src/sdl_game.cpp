#include <SDL.h>
#include <SDL_opengl.h>

int main (int argc, char **argv)
{
	SDL_Window *window = SDL_CreateWindow("║°ƒi gæξ",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		1280, 720,
		SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
	if (!window)
		return 1;

	SDL_GLContext context = SDL_GL_CreateContext(window);
	if (!context)
		return 2;

	bool running = true;
	SDL_Event e;
	while (SDL_WaitEvent(&e)) // TODO: Replace with game loop! This is garbage!
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		SDL_GL_SwapWindow(window);
		switch(e.type)
		{
			case SDL_QUIT:
			{
				running = false;
				break;
			}
			case SDL_KEYDOWN:
			{
				if (e.key.keysym.sym == SDLK_ESCAPE)
					running = false;
				break;
			}
		}
		if (!running)
			break;
	}

	return 0;
}
