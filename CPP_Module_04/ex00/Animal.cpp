#include "Animal.hpp"

Animal::Animal() : _type("not defined")
{
    std::cout << "Animal " << _type << " created" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) 
{
    std::cout << "Animal " << _type << " created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal " << _type << " destroyed" << std::endl;
}

Animal & Animal::operator=(const Animal& other)
{
    if (this != &other) {
        this->_type = other._type;
        std::cout << "Animal " << _type << " created" << std::endl;
    }
    return *this;
}

void Animal::makeSound(void) const { std::cout << "Some noise" << std::endl; }

const std::string &Animal::getType(void) const { return(_type); };