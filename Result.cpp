#include "Result.h"
#include <iostream>
#include "GameManager.h"
#include "TitleState.h"
#include <conio.h>

void ResultState::OnEnter(GameManager* manager) {
	std::cout << "リザルト画面 - 結果: " << value << std::endl;
	std::cout << "任意のキーでタイトルへ戻る" << std::endl;
}

void ResultState::OnUpdate(GameManager* manager, float deltaTime) {
	(void)deltaTime;
	if (_kbhit()) {
		(void)_getch();
		manager->ChangeState(std::make_unique<TitleState>());
	}
}

void ResultState::OnExit(GameManager* manager) {
	std::cout << "リザルト画面終了" << std::endl;
}

const std::string ResultState::GetName() const {
	return "ResultState";
}