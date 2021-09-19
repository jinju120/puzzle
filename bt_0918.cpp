#include <bangtal>
using namespace bangtal;
#include <time.h>

//퍼즐 초기화 함수
void shuffle(int* puzzle)
{
	srand((unsigned int)time(NULL));
	int i;
	int sour=0, dest=0;
	int temp=0;
	
}
int main()
{
	int Arr[2][4] = { {275,455,635,815},{0,180,360,540} };


	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);

	auto scene = Scene::create("퍼즐", "Images/toystory.jpg");

	auto p1 = Object::create("Images/1_1.png", scene,275,540);
	auto p2 = Object::create("Images/1_2.png", scene,455,540);
	auto p3 = Object::create("Images/1_3.png", scene,635,540);
	auto p4 = Object::create("Images/1_4.png", scene,815,540);

	auto p7 = Object::create("Images/2_3.png", scene, 635, 360);


	p1->setOnMouseCallback([&](ObjectPtr objet, int x, int y, MouseAction action)->bool {
		int i = 180;
		p1->locate(scene, x+180,540);
		return true;
		});

	startGame(scene);

	return 0;
}