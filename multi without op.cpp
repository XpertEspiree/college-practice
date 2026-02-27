//Multiple two positive number without using * opertaion
#include<stdio.h>
int main(){
	int a,b,i;
	int result=0;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++){
		result=result+a;
	}
	printf("%dx%d=%d",a,b,result);
}
