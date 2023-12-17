#include <iostream> 

class Animal
{
public:
	unsigned short numLimbs;
	float height;
	float length;
	float weight;

	Animal(unsigned short numLimbs = 4, float height = 1, float length = 1, float weight = 1)
	{
		this->numLimbs = numLimbs;
		this->height = height;
		this->length = length;
		this->weight = weight;
	}

	void print_Anim()
	{
		std::cout << "Mumber of limbs: " << numLimbs << "\t height: " << height << "\t length: " << length << "\t weight: " << weight << std::endl;
	}

};

class Mammal : public Animal
{
public:
	std::string genus;

	Mammal(unsigned char numLimbs = 4, float height = 1, float length = 1, float weight = 1, std::string genus = "undefined"): Animal(numLimbs, height, length, weight)
	{
		this->genus = genus;
	}

	void print_Mammal()
	{
		std::cout << "Genus: " << genus << std::endl;
	}
};

class Dog : public Mammal
{
public:
	std::string name;

	Dog(std::string _name, unsigned char numLimbs = 4, float height = 1, float length = 1, float weight = 1) : Mammal(numLimbs, height, length, weight, "Canis")
	{
		name = _name;
	}

	void print_Dog()
	{
		std::cout << "Name: " << name << "\t height: " << height << "\t length: " << length << "\t weight: " << weight << std::endl;
	}
};




int main()
{
	Animal dog{ 4, 0.5, 0.8, 3};
	dog.print_Anim();
}