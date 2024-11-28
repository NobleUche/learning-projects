#include <stdio.h>



// function prototypes
void calculate();
void division();
void multiplication();
void addition();
void subtract();


int main(){
	printf("\tCalculator App\n");
	printf("----------------------------------------------------------------\n");
	printf("\tMenu\n");
	printf("1. ADDITION\n");
	printf("2. SUBTRACTION\n");
	printf("3. MULTIPLICATION\n");
	printf("4. DIVISION\n");
	calculate();
	return 0;
}




void calculate(){
	int option;

	printf("Choose an option: ");

	scanf("%d", &option);
	
	switch (option){
	case 1:
		addition();
		break;
	case 2:
		subtract();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	default:
		printf("Invalid Option");
		break;
	}
}



void subtract(){
	int a,b,sub;
	printf("Enter two digits: ");
	scanf("%d %d",&a,&b);
	sub=a-b;
	printf("The subtraction between %d and %d= %d\n",a,b,sub);
}


void addition(){
	int a,b,sum;
	printf("Enter two digits: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("The sum of %d and %d= %d\n",a,b,sum);
}


void multiplication(){
	int a,b,multip;
	printf("Enter two digits: ");
	scanf("%d %d",&a,&b);
	multip=a*b;
	printf("The multiplication between %d and %d= %d\n",a,b,multip);
}


void division(){
	int a,b,div;
	printf("Enter two digits: ");
	scanf("%d %d",&a,&b);
	div=a/b;
	printf("The division between %d and %d= %d\n",a,b,div);
}