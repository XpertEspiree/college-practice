#include<stdio.h>
int main(){
	char name[40][10];
	int marks[10], i;
	for(i=0; i<10; i++){
		printf("Enter Names: ");
		gets(name[i]);
		printf("Enter marks: ");
		scanf("%d", &marks[i]);
	}
	//display data
	for(i=0; i<10; i++){
		printf("Name=%s\t marks=%d\n", name[i], marks[i]);
	}
	return 0;
}
