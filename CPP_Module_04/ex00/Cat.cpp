#include "Cat.hpp"

Cat::Cat(/* args */)
{
 this->type = "Cat";
}

Cat::~Cat()
{
}

void Cat::makeSound(void) const {
 std::cout << "Miau" << std::endl;
}