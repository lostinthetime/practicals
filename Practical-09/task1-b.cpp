#include <iostream>
#include <cstdlib>
using namespace std;

class Student{
    private:
    string name,section;
    int year,marks,age;
public:
    Student(string name,int age,int year,string section,int marks){
        this->name = name;
        this->age = age;
        this->year = year;
        this->section = section;
        this->marks = marks;
    }
	int getMarks(){
        return this->marks;
    }
};


int main(){
    Student* students = (Student*)(malloc(sizeof(Student)*5)); 
    string names[5] = {"Ramesh","Ganesh","Suresh","Dharmesh","Chanesh"};
    int marks[5] = {89,87,65,45,99};    
    string sections[5] = {"A","B","C","C","B"};
    for(int i= 0;i< 5; i++){
        students[i] = Student(names[i],17,2021,sections[i],marks[i]);
    }
    int total_marks = 0;
    for(int i=0;i< 5;i++){
        total_marks+= students[i].getMarks();
    }
    cout << "Total Marks of College " << total_marks << endl;
}