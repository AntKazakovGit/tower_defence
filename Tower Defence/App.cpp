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

void App::Execution()
{
	SDL_Event Event;

	while (running)
	{
		//����� �������
		while (SDL_PollEvent(&Event))
		{
			if (Event.type == SDL_QUIT)
			{
				running = false;
			}
		}
		//������� ������
		render->ClearScreen();

		//�������� ������ �������

		//����� �����������
		render->Show();
	}
}

