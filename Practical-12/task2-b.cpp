#include <iostream>
using namespace std; 

class A{
    public:
    ~A(){
        cout << "Destructor of A\n";
    }
};


class B: public A{
    public:
    ~B(){
        cout << "Destructor of B\n";
    }
};


class C: public B{
    public:
    ~C(){
        cout << "Destructor of C\n";
    }
};

int main(){
    C c;
}