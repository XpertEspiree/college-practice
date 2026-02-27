#include<stdio.h>
long factorial(int n){
	if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

	int main() {
    int num;
     long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }

    return 0;
}

