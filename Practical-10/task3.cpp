#include <iostream>
using namespace std;

class Calc{
    private:
    int x,y;
    public:
    Calc(int x,int y){
        this->x = x;
        this->y = y;
    }
    void remainder(){
        cout << this->x %this->y << endl;
    }
};

int main(){
    Calc a(8,3);
    a.remainder();
}