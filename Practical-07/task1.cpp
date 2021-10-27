#include<iostream>
using namespace std;

int main()
{
	int year , month ,date;
	int ch;
	cout<<"Enter year,month and date "<<endl;
	cin >> year >> month >> date;	
	cout << "1 . year   2. month   3. date "<< endl;

	do{
		cout<<"Enter the choice :";
		cin>>ch;
		switch(ch){
			case 1 :cout<< year<<" is year"<<endl;
					break;
			case 2 :cout<< month<<" is month"<<endl;
					break;
			case 3 :cout<< date<<" is date"<<endl;
					break;
			case 4 :cout<< "Not applicable"<<endl;
					break;

		}
	}while(ch != 4);
}

