#include<iostream>
using namespace std;

int main()
{
	int n ; 
	cin>>n ; 
 	char arr[n][n];
	for(int i = n ; i >=1 ; --i)
	{
		for(int j =1 ; j <= i ; ++j)
		{
			arr[i][j] = '*';
			cout<<arr[i][j];
		}
	cout<<endl;
	}
return 0;
}

