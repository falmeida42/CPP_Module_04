#include "Dog.hpp"

Dog::Dog()
{
  this->_type = "Dog";
  this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
  if (this != &other)
  {
    this->_type = other._type;
    this->brain = new Brain(*other.brain);
  }
}

Dog &Dog::operator=(const Dog& other)
{
  if (this != &other)
  {
    delete this->brain;
    this->_type = other._type;
    this->brain = new Brain(*other.brain);
  }
  return *this;
}


Dog::~Dog()
{
  if (this->brain)
    delete this->brain;
  std::cout << "Animal " << _type << " destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
  std::cout << "Au" << std::endl;
}

std::string Dog::getType(std::string type)
{
  return (this->_type);
}