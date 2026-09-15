#include "InGame.h"
#include <iostream>
#include <random>
#include "GameManager.h"
#include "Result.h"
#include <conio.h>

void InGameState::OnEnter(GameManager* manager) {
	std::cout << "インゲーム - Enterキーで抽選 (1〜10)。1が出たら結果画面へ。" << std::endl;
}

void InGameState::OnUpdate(GameManager* manager, float deltaTime) {
	(void)deltaTime;
	if (_kbhit()) {
		int ch = _getch();
		// Enter キー (Windows コンソールでは '\r' = 13)
		if (ch == '\r' || ch == '\n' || ch == 13) {
			// 乱数生成 1..10
			static std::random_device rd;
			static std::mt19937 gen(rd());
			std::uniform_int_distribution<> dist(1, 10);
			int value = dist(gen);
			std::cout << "抽選結果: " << value << std::endl;
			if (value == 1) {
				manager->ChangeState(std::make_unique<ResultState>(value));
			}
		}
	}
}

void InGameState::OnExit(GameManager* manager) {
	std::cout << "インゲーム終了" << std::endl;
}

const std::string InGameState::GetName() const {
	return "InGameState";
}