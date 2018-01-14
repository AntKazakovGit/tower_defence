#include <vector>
#include "Render.h"
#include "App.h"

int main(int argc, char* args[])
{
	SDL_Window *window = SDL_CreateWindow("Tower Defence", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

	TD_Render render = TD_Render(window);

	App::Init(&render);

	App Scene1;

	Scene1.Execution();

	return 0;
}