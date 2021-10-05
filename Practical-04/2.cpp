#include <iostream>
using namespace std;
namespace first{
	int add(int a,int b){
		return a+b;
		}
}
namespace second{
	float add(float a,float b){
		return a+b;
		}
}

int main(){
	cout << add(2,6)<< endl;
	cout << add(1.5f,2.3f)<<endl;
	return 0;
}
