#include <iostream> 
using namespace std; 

class Calc{   
    public: 
        int x;
        Calc(int x){
            this->x = x;
        }
        int operator +(Calc &a){
            return x + a.x;
        }
};

int main(){
    Calc a(5),b(7);
    int  c= a + b;
    cout << c << endl;
}