#ifndef _GAME_SCENE_H_
#define _GAME_SCENE_H_

#include "scene.h"
#include "scene_manager.h"

#include <iostream>

extern SceneManager scene_manager;

class GameScene : public Scene
{
public:
	GameScene() = default;
	~GameScene() = default;

	void on_enter()
	{
		std::cout << "Enter GameScene" << std::endl;
	}
	void on_updata(int delta)
	{
		std::cout << "GameScene is running" << std::endl;
	}
	void on_draw()
	{
		outtextxy(10, 10, _T("Draw of GameScene"));
	}
	void on_input(const ExMessage& msg) {}
	void on_exit()
	{
		std::cout << "Exit GameScene" << std::endl;
	}

private:

};


#endif // !_MENU_SCENE_H_


