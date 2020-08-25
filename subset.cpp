#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,j;
	cin>>n; //no. of elements in a set
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];         // values of element
	}
	// subset in a set is equal to 2 power n.
	for(i=0;i<pow(2,n);i++){
		cout<<"{ ";
		for(j=0;j<n;j++){
			if(i&1<<j){       // generating subset 
				cout<<a[j]<<" ";
			}
		}
		cout<<"}";
	}
	return 0;
}
