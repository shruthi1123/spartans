#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int rem,count=0;
	while(n>0){
	rem=n%2;
	n=n/2;
	if(rem==1){
		count+=1;
	}
	}
	printf("Number of ones of the given number= \"%d\"",count);
	return 0;
}
