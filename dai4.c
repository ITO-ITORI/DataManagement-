#include<stdio.h>
#include <stdlib.h> 
#include <time.h>
#define N 10

int main(){
	char name[N];

	printf("What is your name?\n");


	scanf("%s", name);
	printf("Hello, %s!\n", name);



	int n,i,add=0;

	printf("Rolling the dice...\n");
	srand(time(NULL));

	for(i=1;i<=3;i++){

		n=rand( )%6+1;
		add+=n;

		printf("Die %d: %d\n", i, n);
	}

	printf("Total value: %d\n", add);

	if(add>10){
		printf("%s won!\n", name);
	}else{
		printf("%s lost!\n", name);
	}


	return 0;


}