#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fout;
	fout.open("main.txt");
	fout<<"Hello";
	fout.close();
}