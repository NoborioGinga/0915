#include "InGame.h"
#include <iostream>
#include <random>
#include "GameManager.h"
#include "Result.h"

void InGameState::OnEnter(GameManager* manager) {
	// Enteri‘JˆÚj‚É1-10‚Ì—”‚ğ¶¬‚µ‚Ä‘¦À‚ÉƒŠƒUƒ‹ƒg‚Ö‘JˆÚ
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1, 10);
	int result = dist(gen);

	// ResultState ‚ÉŒ‹‰Ê‚ğ“n‚µ‚Ä‘JˆÚ
	manager->ChangeState(std::make_unique<ResultState>(result));
}

void InGameState::OnUpdate(GameManager* manager, float deltaTime) {
	// InGame ‚Í‘¦‘JˆÚ‚·‚é‚Ì‚Å“Á•Ê‚Èˆ—‚Í•s—v
	(void)manager;
	(void)deltaTime;
}

void InGameState::OnExit(GameManager* manager) {
	std::cout << "ƒCƒ“ƒQ[ƒ€I—¹" << std::endl;
}

const std::string InGameState::GetName() const {
	return "InGameState";
}