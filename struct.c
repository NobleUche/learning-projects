#include <stdio.h>



struct book {
	char name[100];
	int pages;
};


void test(struct book *p_book){
	printf("Book name: \n");
	scanf("%s",p_book->name);
	printf("How many Pages: \n");
	scanf("%d",&p_book->pages);

	printf("Book name is:%s and it contains %d pages\n",p_book->name, *p_book->pages );
};

void main(){
	struct book Pwa;
	test(&Pwa);
}




