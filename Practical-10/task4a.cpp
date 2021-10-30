#include <iostream>

using namespace std;

class Calc {
    private:
        int n;
    public:
        Calc(int n) {
            this -> n = n;
        }
    friend bool operator < (Calc & x, Calc & y);
};

bool operator < (Calc & x, Calc & y) {
    return x.n < y.n;
}
int main() {
    Calc d(5), p(10);
    bool x = p < d;
    bool y = d < p;
    cout << x << endl;
    cout << y << endl;
}