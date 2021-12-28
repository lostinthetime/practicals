#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fout;
	string val;
	fout.open("main.txt");
	fout>>val;
	cout << val << endl;
	fout.close();
}