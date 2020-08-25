#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;// no of testcases
	while(t--){
	
	cin>>n;
	
    int odd,even;
	even= n & 0xAAAAAAAA; // it sets all even bits as 1
	odd= n & 0x55555555; // it sets all odd bits as 1
	
	even=even>>1;   // shifting even bits towards right
	odd=odd<<1;   // shifting odd bits towards left
	
	n=odd|even;
	cout<<n<<endl; 
}
	return 0;
	
}
