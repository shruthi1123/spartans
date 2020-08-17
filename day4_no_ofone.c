#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=1,c=0;
	while(n>0){
		n=n&n-i;
		i++;
		c++;
	}
	printf("%d",c);
}
