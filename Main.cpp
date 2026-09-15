#include<iostream>
#include"GameManager.h"
#include"TitleState.h"
#include"GameState.h"


GameManager manager;

int main() 
{
	
	manager.ChangeState(std::make_unique<TitleState>());
	while (true)
	{
	}
	return 0;

}