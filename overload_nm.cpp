// Operator Overloading using friend function //

// When overloading binary operators, you can achieve symmetric behaviour using friend functions.
// friend functions can access both operands' private members.

#include <iostream>
using namespace std;

class Distance {
    int meter;
    int centimeter;
    public: 
    Distance(int m = 0, int cm = 0) : meter(m), centimeter(cm) {}

    friend Distance operator+(const Distance&d1, const Distance&d2);

    bool operator < (const Distance& d) const
    {
        double d1 = meter + centimeter/100.0;
        double d2 = d.meter + d.centimeter/100.0;
        return d1 < d2;
    }
    void display(){
        cout << "Meter : " << meter << "  ";
        cout << "Centimeter : " << centimeter << endl;
    }
};

Distance operator+(const Distance&d1, const Distance&d2)
{
    Distance temp;
    temp.meter = d1.meter + d2.meter;

    int tempcm = d1.centimeter + d2.centimeter;
    while(tempcm >= 100){
        tempcm -= 100;
        temp.meter++;
    }
    temp.centimeter = tempcm;
    return temp;
}

int main()
{
    Distance d1(5,96);
    Distance d2(3,76);
    Distance d3(11,6);
    d1.display();
    d2.display();
    d3.display();

    Distance d4 = d1+d2;
    cout << "Distance of d4 : " << endl;
    d4.display();

    Distance d5 = d2+d3+d4;
    cout << "Distance of d5 : " << endl;
    d5.display();

    cout << (d2 < d3 ? "True" : "False") << endl;
    return 0;
}