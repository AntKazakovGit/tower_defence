#include "App.h"

void App::OnEvent()
{
	switch (appEvent.type)
	{
	// Обработка выхода
	case SDL_EventType::SDL_QUIT:
		running = false;
		break;

	// Обработка нажатия кнопки мыши
	case SDL_EventType::SDL_MOUSEBUTTONDOWN:
		switch (appEvent.button.button)
		{
		case SDL_BUTTON_LEFT:
			break;
		case SDL_BUTTON_RIGHT:
			break;
		case SDL_BUTTON_MIDDLE:
			break;
		}

	// Обработка отпускания кнопки мыши
	case SDL_EventType::SDL_MOUSEBUTTONUP:
		switch (appEvent.button.button)
		{
		case SDL_BUTTON_LEFT:
			break;
		case SDL_BUTTON_RIGHT:
			break;
		case SDL_BUTTON_MIDDLE:
			break;
		}

	// Обработка нажатия клавиши
	case SDL_EventType::SDL_KEYDOWN:
		break;

	// Обработка отпускания клавиши
	case SDL_EventType::SDL_KEYUP:
		break;
	}
}