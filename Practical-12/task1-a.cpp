#include <iostream>
using namespace std; 

class A{
    private:
    int a = 10;
    public: 
    int b = 20;
    protected:
    int c = 30;
};

class B: public A{
    public:
    void display(){
        cout << a << " " << b << " " << c << "\n";
    }
};

int main(){
    B b;
    b.display();
}