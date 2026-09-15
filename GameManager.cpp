#include "GameManager.h"
#include "TitleState.h"
#include <iostream>
#include"GameState.h"


GameManager::GameManager()
	: isRunning(true), globalTime(0.0f) {
	
}

void GameManager::ChangeState(std::unique_ptr<GameState> newState) {
	if (currentState) {
		currentState->OnExit(this);
	}
	currentState = std::move(newState);
	currentState->OnEnter(this);
	
}

void GameManager::Update(float deltaTime) {
	globalTime += deltaTime;
	if (currentState) {
		currentState->OnUpdate(this, deltaTime);
	}
}