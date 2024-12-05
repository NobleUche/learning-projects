
/*
	Author: Kryptcal;

 	Purpose: To understand pointers and mem alloc a little bit in a simple way;
 	
 	Feel free to modify and learn from it too;
*/






#include <stdio.h>
#include <stdlib.h>


void main(){


	float value1,value2;
	char *symbol=malloc(2*sizeof(char));

	if (symbol == NULL){
		printf("Memory Allocation Failed\n");
		
	};

	printf("\t TEMPERATURE CONVERTER\n");
	printf("------------------------------------------------------------------------");

	printf("\nEnter value and symbol to be converted(32 F): ");
	scanf("%f %c",&value1,symbol);

	switch (symbol[0]){
	case 'C':
	case 'c':
		value2 = (value1 * 9 / 5) + 32;
		printf("Converted Value is %.2f F",value2);
		break;
	case 'F':
	case 'f':
		value2 = (value1 - 32) * 5 / 9;
		printf("Converted Value is %.2f C",value2);
		break;
	default: 
		printf("Operation not specified or invalid");
		break;
	}

	printf("\nPress any key to exit...\n");
    getchar(); 
    getchar(); 

    free(symbol);
}