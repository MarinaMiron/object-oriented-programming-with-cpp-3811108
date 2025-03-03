#include "rangedattack.h"

RangedAttack::RangedAttack(const std::string &name, int range)
    // TODO: Initialize base class
    : Ability(name), rangeValue(range)
{
}

// TODO: Override use()
void RangedAttack::use() const
{
    std::cout << "Firing heat vision beam!" << std::endl;
}

// TODO: Override describe()
void RangedAttack::describe() const
{
    Ability::describe();
    std::cout << "Range: " << rangeValue << " meters" << std::endl;
}