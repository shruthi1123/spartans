/* 
using russian peasant algorithm
  doubling one number and halving other which returns the product of 2 numbers
*/
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int result=0;
	while(a>0){
		if(a&1){
			result+=b; // for odd values 
		}
		a=a>>1; // halving a
		b=b<<1; // doubling b
	}
	cout<<result;
}
