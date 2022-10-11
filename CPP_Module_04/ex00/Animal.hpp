#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
 protected:
  std::string type = "Animal to catalog";
 private:
 
 public:
 Animal();
 ~Animal();
 virtual void makeSound(void) const;
 virtual std::string getType(void) const;
};


#endif