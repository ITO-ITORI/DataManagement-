#include<stdio.h>
#define N 10

int main(){
	char name[N];

	printf("What is your name?\n");


	scanf("%s", name);
	printf("Hello, %s!\n", name);

	return 0;
}