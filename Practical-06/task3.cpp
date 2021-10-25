#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string::iterator iter;
    reverse_iterator<string::iterator> rev = str.rbegin();
    string str2(rev,str.rend());
    cout << str2 << endl;

    return 0;
}
