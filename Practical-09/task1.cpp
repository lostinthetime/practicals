#include <iostream>
using namespace std;

class Shape{
	private:
	int l,b;
	public:
	int printValues(){
		cout << this->name << endl;
		cout << this->rno << endl;
		cout << this->pno<< endl;
		cout << this->address<< endl;
	}
	int setValues(string name,int rno,int pno,string address){
		this->name = name;
		this->rno = rno;
		this->pno = pno;
		this->address = address;
	}
	
};

int main(){
	
	Student s1,s2;
	s1.setValues("Sam",10,1234567891,"New Delhi");
	s2.setValues("John",18,1234657891,"Graphic Era");
	s1.printValues();
	s2.printValues();
}
