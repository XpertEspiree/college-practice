#include <stdio.h>

int main() {
    char str[30];
    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    int i, count=0;
    for(i=0; str[i]!='\0'; i++){
    	count=count+1;
	}
	printf("length at string=%d", count);

    return 0;
}
