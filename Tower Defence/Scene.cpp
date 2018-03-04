#include "Scene.h"


Scene::Scene()
{

}

Scene::~Scene()
{

}

void Scene::Update()
{
	// virtual
}

std::vector<Entity*> Scene::GetEntities()
{
	// virtual
	return std::vector<Entity*>();
}
