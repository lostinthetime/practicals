#include<iostream>
#include<string>
#include<iterator>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    bool flag = true;
    if(s1.length()!= s2.length()) flag = false;
    for(int i = 0;i<s1.length();i++){
        if(s1[i] != s2[i]) flag = false;
    }
    if(flag)
    cout << "Equal";
    else
    cout << "Not Equal";
    return 0;
}
