
#include<iostream>
#include<cstdlib> 
using namespace std; 

int main() { 
 long long dividend,divisor;
 cin>>dividend>>divisor;
// getting  sign of divisor  
int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; 

// remove sign of operands 
dividend = abs(dividend); 
divisor = abs(divisor); 

// Initialize the quotient 

long long quotient = 0, temp = 0; 
// checking down from highest bit

for (int i = 31; i >= 0; --i) { 

	if (temp + (divisor << i) <= dividend) { 
	temp += divisor << i; 
	quotient |= 1LL << i; 
	} 
} 

cout<< sign * quotient; 
return 0; 
} 

