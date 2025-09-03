#include <iostream>
#include "Animal.h"
Animal::Animal(string speciesName, unsigned int discoveryYear)
{
	species = speciesName;
	year_discovered = discoveryYear;
}
Animal::Animal()
{
	species = "No Name";
	year_discovered = -1; 
}
void Animal::display()
{
  cout << species << " [" << year_discovered << "]" << endl;
}
