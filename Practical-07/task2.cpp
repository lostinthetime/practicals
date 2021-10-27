#include<iostream>
#include<ctime>
#include<string>

using namespace std;

int main()
{
	int ch ;
 	time_t curtime = time(0);
        string dt = ctime(&curtime);
	cout<<"Current time = " <<dt ; 
	cout<<"Enter Your Choice "<< " 1. Year  2. month  3 .day"<<endl;
	cin>>ch;
	switch(ch){
		case 1: cout<<dt.substr(20 , 4);
			break;
		case 2: cout<<dt.substr(4, 3);
			break;
		case 3: cout<<dt.substr(0 , 4);
			break;
		default: cout<<"Invalid Choice" ;
			break;
	}
	cout<<endl;
	return 0;
}	 

