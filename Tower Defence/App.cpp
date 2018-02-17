#include "App.h"


App::App()
{
	this->Execution();
}


App::~App()
{

}


void App::Execution()
{
	SDL_Event appEvent;
	while (running)
	{
		// Поиск событий
		while (SDL_PollEvent(&appEvent))
		{
			EventHandling(&appEvent);
		}
		entities = curScene->GetEntities();
		appWindow.UpdateWindow(entities);
	}
}


void App::EventHandling(SDL_Event * appEvent)
{
	switch (appEvent->type)
	{
	case SDL_EventType::SDL_QUIT:
		running = false;
		break;

	}
}
