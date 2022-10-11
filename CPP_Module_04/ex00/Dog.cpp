#include "Dog.hpp"

Dog::Dog(std::string name)
{
  if (name.compare("Dog"))
    this->type = "Dog";
}

Dog::Dog()
{
  this->type = "Dog";
}

Dog::~Dog()
{
}

std::string Dog::getType(std::string type) {

  return (this->type);
}

void Dog::makeSound(void) const {
  std::cout << "Au" << std::endl;
}

