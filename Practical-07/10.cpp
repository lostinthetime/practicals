#include <iostream>
using namespace std;
#define n 4
int main(){
	int arr[n][n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int dir=0;
	int right=n-1,left=0,top=0,bottom=n-1;
	while(right>= left and bottom >= top){
		if(dir==0){
			for(int i=left;i<=right;i++){
				cout << arr[top][i] << " ";
			}
			top++;
			dir++;
			dir=dir%4;		
		}
		else if(dir==1){
			for(int i=top;i<=bottom;i++){
				cout << arr[i][right] << " ";
			}
			right--;
			dir++;
			dir=dir%4;		
		}
		else if(dir==2){
			for(int i=right;i>=left;i--){
				cout << arr[bottom][i] << " ";
			}
			bottom--;
			dir++;
			dir=dir%4;		
		}
		else if(dir==3){
			for(int i=bottom;i>=top;i--){
				cout << arr[i][left] << " ";
			}
			left++;
			dir++;
			dir=dir%4;		
		}
	}
}
