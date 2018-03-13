#include <iostream>
#include <string>

// define our different monster types as an enum
enum class MonsterType
{
  ORGE,
  DRAGON,
  ORC,
  GIANT_SPIDER,
  SLIME
};

// our monster struct represents a single monster
struct Monster
{
  MonsterType type;
  std::string name;
  int health;
};

std::string getMonsterTypeString(Monster monster);
void printMonster(Monster monster);

int main()
{
  Monster orge = {MonsterType::ORGE, "Torg", 145 };
  Monster slime = {MonsterType::SLIME, "Blurp", 23};

  printMonster(orge);
  printMonster(slime);

  return 0;
}

std::string getMonsterTypeString (Monster monster)
{
  switch (monster.type)
  {
    case MonsterType::ORGE:
      return "Orge";
    case MonsterType::DRAGON:
      return "Dragon";
    case MonsterType::ORC:
      return "Orc";
    case MonsterType::GIANT_SPIDER:
      return "Giant Spider";
    case MonsterType::SLIME:
      return "Slime";

    default:
      return "Unknown";
  }
  return "Unknown";
}

void printMonster(Monster monster)
{
  std::cout << "This " << getMonsterTypeString(monster) <<
  " is named " << monster.name << " and has " <<
  monster.health << " health\n";
}
