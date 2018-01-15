#include "App.h"

bool App::running;

TD_Render *App::render;

SDL_Event App::appEvent;

App::App()
{
}


App::~App()
{
}



// Private
void App::Render()
{
	//���������� �������� � ������
	SetObjects();

	//������� ������
	render->ClearScreen();

	//����� ������� � ������
	DrawObjects();

	//����� �����������
	render->Show();
}

void App::SetObjects()
{
	//virtual
}

void App::DrawObjects()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].Show(render);
	}
	objects.clear();
}


// Protected
void App::AddEntities(Entity * entity)
{
	objects.push_back(*entity);
}


// Public
void App::Init(TD_Render * Render)
{
	running = true;
	render = Render;
}

void App::Execution()
{
	while (running)
	{
		//����� �������
		while (SDL_PollEvent(&appEvent))
		{
			OnEvent();
		}

		Render();
	}
}
