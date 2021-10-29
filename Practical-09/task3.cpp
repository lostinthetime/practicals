#include <iostream>
using namespace std;

class Count{
	public:
	static int a;
	Count(){
		this->a++;
		cout << this->a << endl;
	}
};
int Count::a = 0;
int main(){
	Count s1,s2,s3,s4;
}
