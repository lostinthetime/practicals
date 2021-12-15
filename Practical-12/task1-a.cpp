#include <iostream>
using namespace std;

class A
{
private:
    int x = 1;

protected:
    int y = 3;

public:
    int z = 4;

    void displayA()
    {
        cout << "A 's x = " << x << endl;
        cout << "A 's y = " << y << endl;
        cout << "A 's z = " << z << endl;
    }
};

class B : public A
{

public:
    void displayB()
    {
        z = 30; // accessable public member
        y = 20; // accessable protected member with in the class.
        // x = 3; can't  be update due to private in A.
        cout << "B 's Update y = " << y << endl;
        cout << "B 's Update z = " << z << endl;
    }
};

class C : protected A
{
public:
    void displayC()
    {
        z = 30; // accessable protected member with in the class(due to inher. protectedly)
        y = 40; // accessable protected member with in the class.
        // x = 3; can't be update due to private in A.

        cout << "C 's Update y = " << y << endl;
        cout << "C 's Update z = " << z << endl;
    }
};

class D : private A
{
public:
    void displayD()
    {
        z = 50; // accessable private member with in the class(due to inher. protectedly)
        y = 60; // accessable private member with in the class.
        // x = 3; can't be update due to private in A.

        cout << "D 's Update y = " << y << endl;
        cout << "D 's Update z = " << z << endl;
    }
};

class E : public C
{

public:
    void displayE()
    {
        z = 70; // no error due to  protectly inher. by class C from Class A.
        y = 80;

        cout << "E 's Update y = " << y << endl;
        cout << "E 's Update z = " << z << endl;
    }
};

class F : public D
{

public:
    void displayE()
    {
        // z = 70; error due to privately inher . by class D from Class A.
        // y = 80;
    }
};

int main()
{
    B objB;

    cout << objB.z << "  " << endl; // can't able to access y and x from B obj.
    objB.displayB();                // accessing y and z through obj. of B using func.

    C objC;
    objC.displayC(); // x,y and z is inaccesible due to protectedly inhre.

    D objD;
    objD.displayD(); // x,y and z is inaccesible due to privately inhre.

    E objE;
    objE.displayE();

    return 0;
}
