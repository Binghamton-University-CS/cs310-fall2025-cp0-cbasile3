#include "Animal.h"
#include "AnimalsInZoo.h"
int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Mustard 67", 4100);
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();
   delete animal1;
   AnimalsInZoo a1 = (animal3);
   a1.display();
}
