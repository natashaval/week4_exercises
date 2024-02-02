#pragma once

class Animal
{
public:
    // NO constructor in Animal & constructors cannot be declared virtual
    // Animal() {}
    // ~Animal() {}

    // create function that show abstract class
    virtual void speak() {}
};

class Dog : public Animal
{
public:
    Dog() {}
    ~Dog() {}
    void speak();
};

class Cat : public Animal
{
public:
    Cat() {}
    ~Cat() {}
    void speak();
};

class Budgie : public Animal
{
public:
    Budgie() {}
    ~Budgie() {}
    void speak();
};

class Labrador : public Dog {

};

class Terrier : public Dog {
    void speak();
};

// class Mammal & Bird is an abstract sub-class of animal
// Dog, Cat inherit from Mammal and Budgie inherit from Bird