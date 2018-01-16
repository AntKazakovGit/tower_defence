#include <vector>
#include "Render.h"
#include "App.h"

int main(int argc, char* args[])
{
	// Создание окна 
	SDL_Window *window = SDL_CreateWindow("Tower Defence", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
	
	// Создание рендера
	TD_Render render = TD_Render(window);
	
	// Инициализация приложения
	App::Init(&render);
	
	//Создание сцены
	App Scene1;

	// Выполнение сцены
	Scene1.Execution();
	
	return 0;
}