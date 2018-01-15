#include "App.h"

void App::OnEvent()
{
	switch (appEvent.type)
	{
	// ��������� ������
	case SDL_EventType::SDL_QUIT:
		running = false;
		break;

	// ��������� ������� ������ ����
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

	// ��������� ���������� ������ ����
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

	// ��������� ������� �������
	case SDL_EventType::SDL_KEYDOWN:
		break;

	// ��������� ���������� �������
	case SDL_EventType::SDL_KEYUP:
		break;
	}
}