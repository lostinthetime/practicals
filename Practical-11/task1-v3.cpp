#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "Class A"<< endl;
    }
};

class B{
    public:
    void display(){
        cout << "Class B"<< endl;
    }
};

class C: public A,public B{
    public:
    void display1(){
        cout << "Class C"<< endl;
    }
};

int main(){
    A objA;
    B objB;
    C objC;
    objC.A::display();
    objC.B::display();
    objC.display1();
}