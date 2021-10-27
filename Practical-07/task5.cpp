#include<iostream>
using namespace std;

int main()
{
	int n ; 
	cin>>n ;
	char arr[n][n];
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0 ; j <= i; j++)
		{
			arr[i][j] = '*';
			cout<<arr[i][j];
		}
	cout<<endl;
	}
return 0;
}

