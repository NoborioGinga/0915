#include "TitleState.h"
#include <iostream>
#include "GameManager.h"


void TitleState::OnEnter(GameManager* manager) {
	std::cout << "タイトル画面" << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, float deltaTime) 
{

}

void TitleState::OnExit(GameManager* manager) 
{
	std::cout << "タイトル画面終了" << std::endl;
}