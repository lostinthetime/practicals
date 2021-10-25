#include<iostream>
#include<string>
#include<iterator>
using namespace std;
int main(){
    string str;
    cin >> str;
    string::iterator iter;
    reverse_iterator<string::iterator> rev = str.rbegin();
    string str2(rev,str.rend());
    if(str==str2)
    	cout << "Yes it's panlindrome";
    else
    	cout << "No it's not palindrome";
    return 0;
}
