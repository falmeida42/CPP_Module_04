#include "Brain.hpp"
#include "stdio.h"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Brain Idea";
    }
}

Brain::Brain(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
}

std::string    *Brain::getIdeas(void)
{
    return (this->ideas);
}

Brain   &Brain::operator=(Brain &other)
{
    std::cout << "Hello" << std::endl;
    
  if (this != &other)
  {
    std::string *ideas_slot = other.getIdeas();
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = ideas_slot[i];
        std::cout << this->ideas[i] << " -> " << &this->ideas[i] <<
        " " << other.ideas[i] << " -> " << &other.ideas[i] << std::endl;
        }
    }
    std::cout << "Hello" << std::endl;
    return (*this);    
}

Brain::~Brain()
{
    if (this->ideas)
    {
         std::cout << "inside" << std::endl;
     delete[] this->ideas;
     this->ideas = nullptr;
    }
        std::cout << "outside" << std::endl;
}