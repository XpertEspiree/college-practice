//WAP in c to find sum of digits of a number entered by the user
//input:123
//output:6
#include<stdio.h>
int main(){
	int number, digit, sum=0;
	
	printf("Enter a number: ");
	scanf("%dd", &number);
	
	while(number>0){
		digit=number%10;
		sum=sum+digit;
		number=number/10;
	}
	printf("Sum of digit of number is = %d", sum);
	return 0;
}

