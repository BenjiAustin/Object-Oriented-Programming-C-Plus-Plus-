//lab5_RPG.cpp
/***
{this lab teaches your how to code a RPG}
*/

#include "RPG.h"
#include <cstdlib>
#include <iostream>
using namespace std;

RPG::RPG(){
  name = "NPC";
  health = 100;
  strength = 10;
  defense = 10;
  type = "warrior";
  skills[0] = "slash";
  skills[1] = "sparry";
}

RPG::RPG(string inputName, int inputHealth, int inputStrength, int inputDefense, string inputType){
  name = inputName;
  health = inputHealth;
  strength = inputStrength;
  defense = inputDefense;
  type = inputType;
  setskills();
}

void RPG::setskills(){
  if(type == "mage"){
    skills[0] = "fireball";
    skills[1] = "thunder";
  } else if (type == "theif"){
    skills[0] = "pilfer";
    skills[1] = "jab";
  } else if (type == "archer"){
    skills[0] = "parry";
    skills[1] = "crossbow_attack";
  } else {
    skills[0] = "slash";
    skills[1] = "parry";
  }
}

void RPG::printAction(string skill, RPG& opponent){
  printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}


void RPG::updateHealth(int new_health){
  health = new_health;
}

bool RPG::isAlive() const{
  return health > 0;
}

string RPG::getName() const{
    return name;
}

int RPG::getHealth() const{
    return health;
}

int RPG::getStrength() const{
    return strength;}


int RPG::getDefense() const{
    return defense;
}


void RPG::attack(RPG& opponent){
  // int new_health = (*opponent).gethealth ();
  // int new_health = *opponent->getHealth();
  int new_health = (*opponent).getHealth () - (strength - ("opponent").getDefense());
  (*opponent).updateHealth(new_health);
}


void RPG::useSkill(RPG& opponent){
  for(int i = 0; i <SKILL_SIZE; i ++){
      printf("skill %i: %s\n", i, skills[i].c_str());
  }
  int chosen_skill_index;
  printf("choose a skill to use: Enter 0 or 1 on the terminal\n");
  cin >> chosen_skill_index;
  string chossen_skill = skills[chosen_skill_index];
  printAction(chossen_skill,(*opponent));
  attack(opponent);
