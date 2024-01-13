#include <iostream> 

//Паттерн синглтон в данном случае нужен, чтобы существовал иключительно один игрок.



class Player
{
private:
    Player() {}
public:
    static Player& getInstance() {
        static Player  instance;
        return instance;
    }

    unsigned char HP = 100;
    unsigned char make_damage(unsigned char d){
        if (HP - d > 0) {
            return HP -= d;
        }
        else {
            return HP = 0;
        }
    }

    void check_life() {
        if (HP == 0){
            std::cout << "The Player is already dead" << std::endl;
        }
        else {
            std::cout << "The Player is still alive" << std::endl;
        }
    }
};

int main() {
    Player Jack = Player::getInstance();

    for (int i = 5; i >= 0; i--) {
        Jack.make_damage(20);
        Jack.check_life();
    }
}