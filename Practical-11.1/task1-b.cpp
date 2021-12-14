#include <iostream>
using namespace std; 

class A{
    public:
    void display(){
        cout << "From Class A\n";
    };
};

class B: public A{
    public:
    void display1(){
        cout << "From Class B\n";
    };
};

int main(){
    B b;
    b.display();
    b.display1();
}