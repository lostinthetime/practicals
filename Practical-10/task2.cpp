#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	int rno;
	Student(string name, int rno){
		this->name = name;
		this->rno = rno;
	}
};

int main(){
	Student s1("Ram",10);
	Student *ptr = &s1;
	cout << ptr->name << endl;
}
