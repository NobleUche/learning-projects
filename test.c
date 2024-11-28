#include <stdio.h>



int a[10];
int b[10];
int c[10];
int sum=0;
int i;

void main(){

	printf("Enter Values of array A:");
	for (i=0;i<10;i++)
		scanf("%d", &a[i]);

	printf("\nEnter Values for B:");
	for (i=0;i<10;i++)
		scanf("%d",&b[i]);


	for (i=0; i<10;i++)
		c[i]=a[i]+b[i];
	
	for (i=0;i<10;i++)
		printf("Array A: %d\n",a[i]);

	for (i=0;i<10;i++)
		printf("Array B: %d\n",b[i]);

	for (i=0;i<10;i++)
		printf("Array C: %d\n",c[i]);



}