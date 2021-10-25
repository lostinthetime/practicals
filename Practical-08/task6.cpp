#include<iostream>
using namespace std;
int series(int n,int i){
    if(i  <= 2){
        cout << i << ", " ;
        return series(n,i+1);        
    }
    else if(i == n){
        cout << i << " (" << i << "^" << i << " + " << i << " ) " << ", ";
        return 0;

    }
    else{
       cout << i << " (" << i << "^" << i << " + " << i << " ) " << ", ";
        return series(n,i+1);        

    }
}

int main(){
	int n;
	cin >> n;
    	series(n,2);

    return 0;
}
