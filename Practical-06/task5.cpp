#include<iostream>
#include<string>
using namespace std;
int main(){
     string x, y;
     cin >> x;
     cin >> y;
     if(x.compare(y)==0){
        cout<<"equal string "<<endl;
        cout<<"value returned by function compare is: "<<x.compare(y)<<endl;
     }
     else if(x.compare(y)>0){
        cout<<"String a = "<< x <<"  is greater then b= "<< y <<endl;
        cout<<"value returned by function compare is: "<< x.compare(y)<<endl;
     }
      else{
        cout<<"string b = "<< y <<" is greater then a= "<< x <<endl;
        cout<<"value returned by function compare is: "<<x.compare(y)<<endl;
     }

     return 0;

}
