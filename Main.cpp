#include <iostream>
#include <chrono>
#include <thread>
#include "GameManager.h"
#include "TitleState.h"
#include "GameState.h"

GameManager manager;

int main() 
{
	manager.ChangeState(std::make_unique<TitleState>());

	using clock = std::chrono::high_resolution_clock;
	auto last = clock::now();

	while (true)
	{
		auto now = clock::now();
		std::chrono::duration<float> diff = now - last;
		last = now;
		float deltaTime = diff.count();

		manager.Update(deltaTime);

		// ループ間隔を調整（約60FPS）
		std::this_thread::sleep_for(std::chrono::milliseconds(16));
	}
	return 0;
}