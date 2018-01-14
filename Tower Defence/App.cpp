#include "App.h"

bool App::running;

TD_Render *App::render;

App::App()
{
}


App::~App()
{
}


void App::Init(TD_Render * Render)
{
	running = true;
	render = Render;
}

void App::Render()
{		
	//Добавление объектов в вектор
	SetObjects();

	//Очистка экрана
	render->ClearScreen();

	//Вывод текстур в рендер
	DrawObjects();

	//Вывод изображения
	render->Show();
}


void App::Execution()
{
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

		Render();
	}
}


void App::DrawObjects()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].Show(render);
	}
}


void App::SetObjects()
{
	//virtual
}

