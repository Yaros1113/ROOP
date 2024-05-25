#include <iostream>

// обшщее описание классов 
/*
class car
{
	int a;

	void move(int length, int[3] direction)
	{
		/*
			Двигает машину вдоль вектора direction
			на расстояние length.	
		*/
	/*}
}
*/

class Player
{
public:
	Player(int _speed, int _jump_height);
	~Player();
	void walking();

private:
	int speed;
	int jump_height;
	
};

Player::Player(int _speed, int _jump_height)
{
	speed = _speed;
	jump_height = _jump_height;
}

Player::~Player()
{
}

void Player::walking()
{
	/*
	Из потока Input ловятся нажатия клавишь движения (WASD),
	помещаютя в вектор direction, x, z умножаются на скорость,
	вектор передаётся физическому
	движку для движения тела.
	*/
}