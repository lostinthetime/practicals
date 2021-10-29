#include <iostream>
using namespace std;

struct student{
	string name;
	int semester;
};

class College{
	private:
	int students;
	int rooms;
	public:
	College(int students,int rooms){
		this->students = students;
		this->rooms = rooms;
	}
	void printValues(){
		cout << this->students << " " << this->rooms << endl;
	}
};

int main(){
	College graphicEra(1000,200);
	graphicEra.printValues();
	struct student s1;
	s1.name = "Test";
	s1.semester = 3;
	cout << s1.name << " " << s1.semester << endl;
}
