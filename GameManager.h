#pragma once
#include <memory>
#include <string>

class GameState;

class GameManager
{

	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float globalTime;
public:

	GameManager();
	void ChangeState(std::unique_ptr<GameState> newState);
	void Update(float deltaTime);

};
