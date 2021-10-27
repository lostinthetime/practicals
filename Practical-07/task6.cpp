#include<iostream>
using namespace std;

int main()
{
	int n ; 
	cin>>n;
	char arr[n][n];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0; j < n ;j++)
		{
			if(j >= i)
			{
				arr[i][j] = '*';
				cout<<arr[i][j];
			}
			else
			{
				cout<<" ";
			}
		}
	cout<<endl;
	}
return 0;
}

