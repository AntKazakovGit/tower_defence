#include "App.h"

void App::OnEvent()
{
	switch (appEvent.type)
	{
	// Обработка выхода
	case SDL_EventType::SDL_QUIT:
		Event_Exit();
		break;

	// Обработка нажатия кнопки мыши
	case SDL_EventType::SDL_MOUSEBUTTONDOWN:
		switch (appEvent.button.button)
		{
		case SDL_BUTTON_LEFT:
			Event_LeftButtonDown();
			break;
		case SDL_BUTTON_RIGHT:
			Event_RightButtonDown();
			break;
		case SDL_BUTTON_MIDDLE:
			Event_MiddleButtonDown();
			break;
		}

	// Обработка отпускания кнопки мыши
	case SDL_EventType::SDL_MOUSEBUTTONUP:
		switch (appEvent.button.button)
		{
		case SDL_BUTTON_LEFT:
			Event_LeftButtonUp();
			break;
		case SDL_BUTTON_RIGHT:
			Event_RightButtonUp();
			break;
		case SDL_BUTTON_MIDDLE:
			Event_MiddleButtonUp();
			break;
		}

	// Обработка нажатия клавиши
	case SDL_EventType::SDL_KEYDOWN:
		Event_KeyDown();
		break;

	// Обработка отпускания клавиши
	case SDL_EventType::SDL_KEYUP:
		Event_KeyUp();
		break;
	}
}


void App::Event_Exit()
{
	running = false;
}

void App::Event_LeftButtonDown()
{
	//virtual
}

void App::Event_RightButtonDown()
{
	//virtual
}

void App::Event_MiddleButtonDown()
{
	//virtual
}

void App::Event_LeftButtonUp()
{
	//virtual
}

void App::Event_RightButtonUp()
{
	//virtual
}

void App::Event_MiddleButtonUp()
{
	//virtual
}

void App::Event_KeyDown()
{
	//virtual
}

void App::Event_KeyUp()
{
	//virtual
}
