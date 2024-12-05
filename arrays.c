#include <stdio.h>



void main(){

	int arr[2][3],i,j;
	printf("Enter Matrix digits: ");

	for (i=0;i<2;i++){
		for(j=0;j<3;j++)
			scanf("%d\n",&arr[i][j]);
	};

	for (i=0;i<2;i++){
		for(j=0;j<3;j++)
			printf("row %d column %d = %d \n",i,j,arr[i][j]);
	};

	printf("\nThe address for array is: %d", arr);
}