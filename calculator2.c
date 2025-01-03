#include <stdio.h>
#include <stdlib.h>

// Variables

float *input,*result;
char symbol;
int size,i;

// Function prototype

void addition(float *a, int b);
void subtraction(float *a, int b);
void multiplication(float *a, int b);
void division(float *a, int b);


void main(){
	printf("Enter number of chars to be used in calculation: ");
	scanf("%d",&size);

// Memmory init
	input=(float*)malloc(size*sizeof(float));
	if (input==NULL){
		perror("Memory Allocation Error ");
	};

// Loop for input
	for(i=0;i<size;i++){
		printf("Enter Digit(%d): ",i );
		scanf("%f",&input[i]);
	}
	while (getchar() != '\n');

	printf("Enter symbol to be used to calculate: ");
	scanf("%c",&symbol);
	//scanf("%f%c%f",&input1,&symbol,&input2);

// Comparison variables
	
	switch(symbol){
	case '+':
		for (i=0;i<size;i++){
			addition(input, size);
		};
		break;
	case '-':
		for (i=0;i<size;i++){
			subtraction(input, size);
		};
		break;
	case '/':
		for (i=0;i<size;i++){
			division(input, size);
		};
		break;
	case '*':
		for (i=0;i<size;i++){
			multiplication(input, size);
		};
		break;
	default:
		printf("Operation not specified");
		break;
	}
}


void addition(float *a, int b){
	result=calloc(1,sizeof(float));
	if (result==NULL){
		perror("Error allocating memory");
		return;
	}
	for(i=0;i<b;i++){
		*result+=a[i];
	}
	printf("%.3f\n",*result);
	free(result);
	free(input);
};

void subtraction(float *a, int b){
	result=calloc(1,sizeof(float));
	if (result==NULL){
		perror("Error allocating memory");
		return;
	}
	
	for(i=0;i<b;i++){
		*result+=a[i];
	}
	printf("%.3f\n",*result);
	free(result);
	free(input);
};

void division(float *a, int b){
	float division;

	if (b==0)
		printf("Invalid Operation");
	else
		result=calloc(1,sizeof(float));
		if (result==NULL){
		perror("Error allocating memory");
		return;
		}
	for(i=0;i<b;i++){
		*result=a[0];
		if (*result==0){
			perror("Error: division by zero encountered");
		};
		*result/=a[i];
	}
		printf("%.3f\n",*result);
		free(result);
		free(input);
};

void multiplication(float *a, int b){
	result=calloc(1,sizeof(float));
	if (result==NULL){
		perror("Error allocating memory");
		return;
	}
	for(i=0;i<b;i++){
		*result=a[0];
		*result*=a[i];
	}	printf("%.3f\n",*result);
	free(result);
	free(input);
};




