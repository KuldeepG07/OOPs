
// Runtime Polymorphism using Method Overriding

#include <iostream>
using namespace std;

class bird
{
    public:
        void display()
        {
            cout << "I am the display function of the base class";
            cout << "\n\n";
        }
};

class parrot : public bird
{
    public:
        void display()
        {
            cout << "I am the display function of the derived class";
            cout << "\n\n";
        }
};

int main()
{
    bird b;
    parrot p;

    b.display();
    p.display();
}