#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
private:
 /* data */
public:
 Dog();
 Dog(std::string name);
 ~Dog();
   virtual std::string getType(std::string type);
   virtual void makeSound(void) const;

};



#endif