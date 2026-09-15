#include "MainMenu.h"
#include <iostream>
#include "GameManager.h"
#include "InGame.h"
#include <conio.h>

void MainMenuState::OnEnter(GameManager* manager) {
	std::cout << "メインメニュー - '1' キーでゲーム開始" << std::endl;
}

void MainMenuState::OnUpdate(GameManager* manager, float deltaTime) {
	(void)deltaTime;
	if (_kbhit()) {
		int ch = _getch();
		if (ch == '1') {
			manager->ChangeState(std::make_unique<InGameState>());
		}
	}
}

void MainMenuState::OnExit(GameManager* manager) {
	std::cout << "メインメニュー終了" << std::endl;
}

const std::string MainMenuState::GetName() const {
	return "MainMenuState";
}