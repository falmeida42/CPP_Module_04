#include "Animal.hpp"

Animal::Animal()
{
}

Animal::~Animal()
{
}

std::string Animal::getType(void) const { return(type); };

void Animal::makeSound(void) const { std::cout << "Some noise" << std::endl; }
