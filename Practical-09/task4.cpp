#include <iostream>
using namespace std;

class Student{
	private:
	int age,marks;
	string name;
	public:
	Student(string name,int age,int marks){
		this->name = name;
		this->age = age;
		this->marks = marks;
	}
	friend int add(Student s1,Student s2,Student s3);
};

int add(Student s1,Student s2, Student s3){
	return s1.marks + s2.marks + s3.marks;
}
int main(){
	Student s1("Ash",10,45),s2("Cash",13,46),s3("Dash",14,48);
	int sum = add(s1,s2,s3);
	cout << sum << endl;
	
}
