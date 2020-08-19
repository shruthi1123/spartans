#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n;
	while(n>0){
		t=n&n-1;          // checking whether n is a power of 2
		if(t==0){ 
			cout<<n;
			break;
		}
		else
		{       // if n is not a power of 2, decrementing n for getting largest pow of 2
		
			n=n-1;  
		}
	}
	return 0;
}
