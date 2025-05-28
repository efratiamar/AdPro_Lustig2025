#include <iostream>
using namespace std;

// Base class 1: Animal
class Animal
{
public:
    void eat()
    {
        cout << "needs food" << endl;
    }
    void sleep()
    {
        cout << "needs sleep" << endl;
    }
    void whoAmI()
    {
        cout << "I am an animal" << endl;
    }
};

////////////////////////////////////////////
// Base class 2: Transportation
class Transportation
{
public:
    void move()
    {
        cout << "can get from place to place" << endl;
    }
    void stop()
    {
        cout << "stop" << endl;
    }
    void whoAmI()
    {
        cout << "I am a transport vehicles" << endl;
    }
};

////////////////////////////////////////////
// Derived class: Horse (inherits from both Animal and Transportation)
class Horse : public Animal, public Transportation
{
public:
    Horse() { cout << "HORSE:" << endl; }
    void gallop()
    {
        cout << "can gallop" << endl;
    }
};

////////////////////////////////////////////
int main()
{
    Horse myHorse;

    myHorse.eat();
    myHorse.sleep();

    myHorse.move();
    myHorse.stop();

    myHorse.gallop();

    myHorse.Animal::whoAmI();
    myHorse.Transportation::whoAmI();

    return 0;
}


