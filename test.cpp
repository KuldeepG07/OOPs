#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() const { cout << "Base\n"; }
    virtual ~Base() {} 
};

class Derived : public Base {
private:
    int* value;

public:
    Derived(int val) : value(new int(val)) {}

    void print() const override {
        cout << "Derived: " << *value << endl;
    }

    ~Derived() { delete value; } 
};

int main() {
    Base* ptr = new Derived(5);
    delete ptr; 
    ptr->print(); 
    return 0;
}