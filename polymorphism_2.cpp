
// Runtime ppolymorphism using Virtual Function

#include <iostream>
using namespace std;

class bird {
    public:
    virtual void display() {
        cout << "This is display in bird class." << "\n";
    }

    void print() {
        cout << "This is show in bird class." << "\n";
    }
};

class parrot : public bird {
    public:
    void display() {
        cout << "This is display in parrot class." << "\n";
    }

    void print() {
        cout << "This is show in parrot class." << "\n";
    }
};

int main()
{
    bird* brd;
    parrot p;
    brd = &p;
    brd->display();
    brd->print();
}