// meleeattack.cpp
#include "meleeattack.h"

MeleeAttack::MeleeAttack(const std::string &name, int force)
    // TODO: Initialize base class
    : Ability(name), impactForce(force)
{
}

// TODO: Override use()
void MeleeAttack::use() const
{
    std::cout << "Delivering devastating close-range attack!" << std::endl;
}

// TODO: Override describe()
void MeleeAttack::describe() const
{
    Ability::describe();
    std::cout << "Impact force: " << impactForce << std::endl;
}