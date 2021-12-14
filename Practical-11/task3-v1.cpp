#include <iostream>
using namespace std;
class A {
    public:
    void display(){
        cout << "Class A" << endl;
    }
};
class B: public A{
    public:
    void display1(){
        cout << "Class B"<< endl;
    }
};
class C: public A{
    public:
    void display2(){
        cout << "Class C"<< endl;
    }
};
class D: public B,public C{
    public:
    void display3(){
        cout << "Class D"<< endl;
    }
};
int main() {
    A objA;
    B objB;
    C objC;
    D objD;
    objA.display();
    objB.display1();
    objC.display2();
    objD.display(); 
    // This will cause error because of ambiguity
}