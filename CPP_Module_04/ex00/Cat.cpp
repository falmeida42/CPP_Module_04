#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Animal " << _type << " created" << std::endl;
}

Cat::Cat(const Cat &other)
{
    this->_type = other._type;
    std::cout << "Animal " << this->_type << " created" << std::endl;

}

Cat::~Cat()
{
    std::cout << "Animal " << _type << " destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        this->_type = other._type;
        std::cout << "Animal " << _type << " destroyed" << std::endl;
    }

    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}

const std::string& Cat::getType() const
{
    return (this->_type);
}