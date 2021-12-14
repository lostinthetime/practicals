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
        display();
    };
};

int main(){
    B b;
    b.display1();
}