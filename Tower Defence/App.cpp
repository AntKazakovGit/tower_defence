#include "App.h"


App::App()
{
	curScene = new Scene();
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

		appWindow.UpdateWindow(curScene->GetEntities());
	}
}


void App::EventHandling(SDL_Event * appEvent)
{
	switch (appEvent->type)
	{
		// Обработка выхода
	case SDL_EventType::SDL_QUIT:
		running = false;
		break;

		// Обработка движения мыши
	case SDL_EventType::SDL_MOUSEMOTION:
		curScene->OnMouseMotion(
			appEvent->motion.x, 
			appEvent->motion.y, 
			appEvent->motion.xrel, 
			appEvent->motion.yrel, 
			appEvent->motion.state);
		break;

		// Обработка нажатия клавиш мыши
	case SDL_EventType::SDL_MOUSEBUTTONDOWN:
		switch (appEvent->button.button)
		{
		case SDL_BUTTON_LEFT:
			switch (appEvent->button.clicks)
			{
			case 1:
				curScene->OnLeftButtonClick(appEvent->button.x, appEvent->button.y);
				break;
			case 2:
				curScene->OnLeftButtonDoubleClick(appEvent->button.x, appEvent->button.y);
				break;
			}
			break;
		case SDL_BUTTON_RIGHT:
			switch (appEvent->button.clicks)
			{
			case 1:
				curScene->OnRightButtonClick(appEvent->button.x, appEvent->button.y);
				break;
			case 2:
				curScene->OnRightButtonDoubleClick(appEvent->button.x, appEvent->button.y);
				break;
			}
			break;
		case SDL_BUTTON_MIDDLE:
			switch (appEvent->button.clicks)
			{
			case 1:
				curScene->OnMiddleButtonClick(appEvent->button.x, appEvent->button.y);
				break;
			case 2:
				curScene->OnMiddleButtonDoubleClick(appEvent->button.x, appEvent->button.y);
				break;
			}
			break;
		}
		break;
	}
}
