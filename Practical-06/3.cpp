#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	string::reverse_iterator reverse;
	for(reverse=str.rbegin();reverse<str.rend();reverse++)
		cout << *reverse;
	return 0;
}
