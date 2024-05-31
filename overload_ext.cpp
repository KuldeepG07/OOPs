// Overload Operator * such that multiplication from and to the integer work same way,
// like, M * 5 and 5 * M, where M is the object

#include <iostream>
using namespace std;

class Object {
    int num;
    
    public:
    Object(int n=1) : num(n){}

    friend Object operator*(const Object& o1,const Object& o2 );

    void display()
    {
        cout << "Multiplication is " << num << endl;
    }
};

Object operator*(const Object& o1, const Object& o2)
{
    Object temp;
    temp.num = o1.num * o2.num;
    return temp;
}
int main()
{
    Object M1(10);
    Object M2(20);
    Object num1 = M1 * 5;
    Object num2 = 5 * M2;
    num1.display();
    num2.display();
    return 0;
}