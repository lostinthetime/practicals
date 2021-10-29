#include <iostream>
using namespace std;

class Shape{
	private:
	int l,b,s;
	public:
	int area(int l,int b){
		cout << l*b << endl;
	}
	int area(int s){
		cout << s*s << endl;
	}
	
};

int main(){
	Shape s1,s2;
	s1.area(4,5);
	s2.area(6);
}
