#pragma once

class Animal
{
public:
    // NO constructor in animal
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