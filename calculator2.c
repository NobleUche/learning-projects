#include <stdio.h>

// Variables

float input1,input2;
char symbol;

// Function prototype

void addition(float a, float b);
void subtraction(float a, float b);
void multiplication(float a, float b);
void division(float a, float b);


void main(){

	printf("Enter digits (e.g 3.0+3.0):");
	scanf("%f%c%f",&input1,&symbol,&input2);

// Comparison variables
	
	switch(symbol){
	case '+':
		addition(input1,input2);
		break;
	case '-':
		subtraction(input1,input2);
		break;
	case '/':
		division(input1,input2);
		break;
	case '*':
		multiplication(input1,input2);
		break;
	default:
		printf("Operation not specified");
		break;
	}
}


void addition(float a, float b){
	float sum;
	sum=a+b;
	printf("%.3f\n",sum);
};

void subtraction(float a, float b){
	float subtract;
	subtract=a-b;
	printf("%.3f\n",subtract);
};

void division(float a, float b){
	float division;
	if (b==0)
		printf("Invalid Operation");
	else
		division=a/b;
		printf("%.3f\n",division);
};

void multiplication(float a, float b){
	float multiply;
	multiply=a*b;
	printf("%.3f\n",multiply);
};




