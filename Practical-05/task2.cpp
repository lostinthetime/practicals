#include <iostream>
using namespace std;

int main(){
	int a = 1;
	char b = 'b';
	bool c = false;
	long d = 123;
	float e = 23.45;
	double f = 5234.234;
	long double g = 234.345;
	short h = 434;
	wchar_t i = L'D';
	cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(d) << " " << sizeof(e) << " " << sizeof(f) << " "<< sizeof(g) << " " << sizeof(h) << " " << sizeof(i) << endl;
	cout << sizeof(int) << " " << sizeof(char) << " " << sizeof(bool) << " " << sizeof(long) << " " << sizeof(float) << " " << sizeof(double) << " "<< sizeof(long double) << " " << sizeof(short) << " " << sizeof(wchar_t) << " ";
}

