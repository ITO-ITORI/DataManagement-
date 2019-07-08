#include<stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
	int n,i,add=0;

	printf("Rolling the dice...\n");
	srand(time(NULL));

	for(i=1;i<=2;i++){

		n=rand( )%6+1;
		add+=n;

		printf("Die %d: %d\n", i, n);
	}

	printf("Total value: %d\n", add);


	return 0;


}