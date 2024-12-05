#include <stdio.h>


void main(){

	int arr[5]={1,2,3,4,5};
	int *ptr,i;

	ptr=arr;

	printf("%u\n",ptr);
	printf(" Array %d\n",sizeof(*arr));
	printf("%d\n\n",*arr+4 );
	for(i=0;i<5;i++)
		printf("%d\n",*ptr+i );
}