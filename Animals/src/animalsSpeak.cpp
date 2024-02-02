#include <iostream>
#include <vector>
#include <memory>
#include "animalClasses.h"

int main()
{
    //declare a vector of animal pointers here
    // std::vector<Animal*> pet;
    std::vector<std::unique_ptr<Animal>> pet;

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    std::unique_ptr<Dog> dog = std::make_unique<Dog>();
    std::cout << "Hey, ";
    dog->speak();

    pet.push_back(std::move(dog));
    pet.push_back(std::make_unique<Cat>());
    pet.push_back(std::make_unique<Budgie>());
    
    // Create new object and push for vector -> since vector use pass by value, we'll have object from Dog and copy in vector
    // std::vector<Animal> pet;
    // Dog dog = Dog();
    // pet.push_back(dog);
    // dog.speak();
    // Cat cat = Cat();
    // pet.push_back(cat);

    //loop through all the animals in your vector and call Speak() on them in turn
    for (auto &anim : pet) {
        anim->speak();
        // anim.speak();
    }

    return 0;
}