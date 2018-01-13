#include <vector>
#include "Render.h"

int main(int argc, char* args[])
{
	SDL_Window *window = SDL_CreateWindow("Tower Defence", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

	TD_Render render = TD_Render(window);

	bool running = true;

	SDL_Event Event;

	while (running)
	{
		//Поиск событий
		while (SDL_PollEvent(&Event))
		{
			if (Event.type == SDL_QUIT)
			{
				running = false;
			}
		}
		//Очистка экрана
		render.ClearScreen();

		//Добавить рендер текстур

		//Вывод изображения
		render.Show();
	}

	return 0;
}