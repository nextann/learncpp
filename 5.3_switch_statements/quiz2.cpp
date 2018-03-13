#include <iostream>
#include <string>


enum Animal
{
  PIG,
  CHICKEN,
  GOAT,
  CAT,
  DOG,
  OSTRICH
};

std::string getAnimalName(Animal animal);
void printNumberOfLegs(Animal animal);

int main()
{
  //Animal cat = Animal::CAT;
  //Animal chicken = Animal::CHICKEN;
  printNumberOfLegs(CAT);
  printNumberOfLegs(CHICKEN);

  return 0;
}

std::string getAnimalName(Animal animal)
{
  switch (animal)
  {
    case PIG:
      return "pig";
    case CHICKEN:
      return "chicken";
    case GOAT:
      return "goat";
    case CAT:
      return "cat";
    case DOG:
      return "dog";
    case OSTRICH:
      return "ostrich";
    default:
      return "getAnimalName(): Unhandled enumerator";
  }
}

void printNumberOfLegs(Animal animal)
{
  std::cout << "A " << getAnimalName(animal) << " has ";

  switch (animal)
  {
    case CHICKEN:
    case OSTRICH:
      std::cout << "2";
      break;
    case PIG:
    case CAT:
    case GOAT:
    case DOG:
      std::cout << "4";
      break;
    default:
      std::cout << "printNumberOfLegs(): Unhandled enumerator";
      break;
  }

  std::cout << " legs.\n";
}
