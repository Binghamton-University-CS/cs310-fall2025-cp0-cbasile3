#include <iostream>
using namespace std;

#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo()
{
	numAnimals = 0;

	}
AnimalsInZoo::AnimalsInZoo(Animal animal1)
{
	numAnimals = 1;
	animal = animal1;
}
void AnimalsInZoo::display()
{
	cout << numAnimals << endl;
	if(numAnimals > 0)
	{
		animal.display();
	}
}

