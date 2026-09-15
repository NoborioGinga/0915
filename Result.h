#pragma once
#include "GameState.h"

class ResultState : public GameState
{
	int value;
public:
	explicit ResultState(int v) : value(v) {}
	void OnEnter(GameManager* manager) override;
	void OnUpdate(GameManager* manager, float deltaTime) override;
	void OnExit(GameManager* manager) override;
	const std::string GetName() const override;
};
