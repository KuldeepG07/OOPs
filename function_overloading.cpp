
// Rules for Function Overloading //

// void display(int);
// void display(int,double);

// void display(int);
// void display(double);

// void display(int, double);
// void display(double, int);

// int display(int);   
// double display(int);

// Sample Code

#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double f) {
        cout << "Printing double: " << f << endl;
    }

    void print(string s) {
        cout << "Printing string: " << s << endl;
    }

    void print(int i, double f) {
        cout << "Printing int and double: " << i << ", " << f << endl;
    }

    void print(double f, int i) {
        cout << "Printing double and int: " << f << ", " << i << endl;
    }
    
};

int main() {
    Printer p;
    p.print(10);          // Calls print(int)
    p.print(5.5);         // Calls print(double)
    p.print("Hello");     // Calls print(string)
    p.print(10, 5.5);     // Calls print(int, double)
    p.print(5.5, 10);     // Calls print(double, int)
    // p.print();
    return 0;
}

