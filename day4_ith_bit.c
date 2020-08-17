#include<stdio.h>
int main(){
	int n ,i;
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter the ith bit:");
	scanf("%d",&i);
	int t=1<<(i-1);
	if((n&t)==t)
	{
		printf("Yes, The ith bit of the given number is set!");
	}
	else{
		printf("No,The ith bit of the given number is set!");
	}
	return 0;
}
