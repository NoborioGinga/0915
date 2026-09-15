#include "TitleState.h"
#include <iostream>
#include "GameManager.h"
#include "GameState.h"
#include "MainMenu.h"
#include <conio.h>

void TitleState::OnEnter(GameManager* manager) {
	std::cout << "タイトル画面 - 任意のキーでメインメニューへ" << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, float deltaTime) 
{
	// 任意のキーでメインメニューへ遷移
	if (_kbhit()) {
		(void)_getch();
		manager->ChangeState(std::make_unique<MainMenuState>());
	}
}

void TitleState::OnExit(GameManager* manager) 
{
	std::cout << "タイトル画面終了" << std::endl;
}

const std::string TitleState::GetName() const
{
    return "TitleState";
}