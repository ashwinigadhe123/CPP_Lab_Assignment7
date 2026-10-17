#include <iostream>
using namespace std;
 
// Compile-time polymorphism: function overloading
class Area
{
public:
    float calculate(int side)
    {
        return side * side;
    }
 
    float calculate(int length, int breadth)
    {
        return length * breadth;
    }
 
    float calculate(float radius)
    {
        return 3.14 * radius * radius;
    }
};
 
// Run-time polymorphism: function overriding using virtual function
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};
 
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks." << endl;
    }
};
 
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows." << endl;
    }
};
 
int main()
{
    int side, length, breadth;
    float radius;
 
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    cout << "Enter radius of circle: ";
    cin >> radius;
 
    cout << "\n--- Compile-Time Polymorphism (Function Overloading) ---" << endl;
    Area a;
    cout << "Area of square: " << a.calculate(side) << endl;
    cout << "Area of rectangle: " << a.calculate(length, breadth) << endl;
    cout << "Area of circle: " << a.calculate(radius) << endl;
 
    cout << "\n--- Run-Time Polymorphism (Virtual Function) ---" << endl;
    Animal animal;
    Dog dog;
    Cat cat;
    Animal *ptr;
 
    ptr = &animal;
    ptr->sound();
 
    ptr = &dog;
    ptr->sound();
 
    ptr = &cat;
    ptr->sound();
 
    return 0;
}
