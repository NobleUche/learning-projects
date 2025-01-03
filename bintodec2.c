#include <stdio.h>

#define SIZE 24




void conv(){
	int index=0;
	int Binary[SIZE];
	int input,i;
	printf("Enter number: ");
	scanf("%d",&input);

	if(input==0){
		printf("Binary:0");
		
	}


	while(input>0){
		Binary[index]=input%2;
		input=input/2;
		index++;
	}

	printf("Binary: ");

	for(i=index-1;i>=0;i--){
		printf("%d",Binary[i]);
	}


}


void main(){

	conv();

}