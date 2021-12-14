#include <iostream>
using namespace std; 

class A{
    public:
    int a;
    A(int x){
        a = x;
    }
};


class B: public A{
    public:
    int b;
    B(int x)::A(x){
        b = x;        
    }
};


int main(){
    B b(10);
    cout << "Value Inside A" << b.a<< endl;
    cout << "Value Inside B" << b.b<< endl;
    
}