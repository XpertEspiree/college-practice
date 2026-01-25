#include<stdio.h>
int main(){
	int number, digit,
	printf("Enter a number: ");
	scanf("%d", &number);
	
	while(number>0){
		digit=number%10;
		number=number%10;
		printf("%d digit = %d\n", i, digit);
		i++;
	}
}
