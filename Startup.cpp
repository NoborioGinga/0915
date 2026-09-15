#include "Startup.h"
#include "GameManager.h"
#include "GameState.h"
#include <iostream>





void Startup::OnEnter(GameManager* manager) {
	std::cout << "Startup State Entered" << std::endl;
}

void Startup::OnUpdate(GameManager* manager, float deltaTime) {
}

void Startup::OnExit(GameManager* manager) {
	std::cout << "Startup State Exited" << std::endl;
}

const std::string Startup::GetName() const {
	return "Startup";
}