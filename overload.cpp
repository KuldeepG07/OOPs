// Operator overloading allows you to define how operators work with user-defined types (such as classes). 
// Unary operators, like ++, --, +, and -, operate on a single operand. 
// You can overload these operators both as member functions and non-member (friend) functions.


// Sample Code


#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    Counter(){}

    Counter(int v = 0) : value(v) {}

    // Overload the unary ++ operator (prefix)
    Counter& operator++() {
        ++value; // Increment value
        return *this;
    }

    // Overload the unary ++ operator (postfix)
    Counter operator++(int) {
        Counter temp = *this;
        ++value; // Increment value
        return temp; // Return the old value
    }

    // Method to display the value
    void display() const {
        cout << "Counter: " << value << endl;
    }
};

int main() {
    Counter c1(10);
    ++c1; // Calls prefix increment
    c1.display(); // Output: Counter: 11

    c1++; // Calls postfix increment
    c1.display(); // Output: Counter: 12

    return 0;
}










// Another Example : VECTOR MAGNITUDE by overloading ! operator

// #include <iostream>
// #include <cmath>
// using namespace std;

// class Vector2D {
// private:
//     double x;
//     double y;

// public:
//     Vector2D(double xvalue = 0.0, double yvalue = 0.0) : x(xvalue), y(yvalue) {}

//     // Overload unary ! operator
//     double operator!() const {
//         return sqrt(x * x + y * y); // Magnitude calculation
//     }

//     // Method to display the vector
//     void display() const {
//         cout << "(" << x << ", " << y << ")";
//     }

//     //add two vector by overloading + operator
// };

// int main() {
//     Vector2D v(3.0, 4.0);
//     Vector2D v1(4.0, 5.0);
//     cout << "Vector: ";
//     v.display(); // Output: (3, 4)

//     // Applying unary ! operator to calculate magnitude
//     double magnitude = !v;
    
//     cout << "\nMagnitude: " << magnitude << endl; // Output: Magnitude: 5

//     // Vector2D v2 = v + v1;

//     return 0;
// }
