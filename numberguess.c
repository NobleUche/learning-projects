#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
	srand(time(NULL));
	int value1=rand()%100;
	int userinp;

	printf("Guess a number between 0-99: ");
	scanf("%d",&userinp);


	if (userinp==value1){
		printf("You guessed right\n");
	}else{
		printf("Wrong. The code guessed is %d\n",value1);
	
	}


}