#include <stdio.h>


/*Take inputs to setup an acct then permits deposit and withdrawal which deducts your balance*/



struct Date {
	int day;
	int month;
	int year;
};

typedef struct {
	char name[100];
	int age;
	float balance;
	struct Date dob;
} Details;


void Acct_creation(Details *p_user){
	p_user->balance=0.00;
	printf("Fill in details\n");
	printf("Full name: ");
	fgets(p_user->name,sizeof(p_user->name),stdin);
	printf("\nAge: ");
	scanf("%d",&p_user->age);
	printf("\nDate Of birth: ");
	scanf("%d %d %d",&p_user->dob.day,&p_user->dob.month,&p_user->dob.year);
}


void Deposit(Details *p_user){
	printf("Current Account Balance: %.2f\n", p_user->balance);
	float Dep_amnt;
	scanf("%f",&Dep_amnt);
	p_user->balance+=Dep_amnt;
	printf("New balance: %.2f\n",p_user->balance);
}


void withdrawal(Details *p_user){

	float Withdrw_amnt;
	scanf("%f",&Withdrw_amnt);
	p_user->balance-=Withdrw_amnt;
	printf("New Balance: %.2f\n", p_user->balance);
}



void View_Acct(Details *p_user){
	printf("Account Owner name: %s\n",p_user->name);
	printf("Age: %d\n",p_user->age);
	printf("Account Balance: %.2f\n",p_user->balance);
	printf("Date Of Birth: %d-%d-%d\n",p_user->dob.day,p_user->dob.month,p_user->dob.year);
}


void main(){

	//printf("\tBanking Test Application\n");
	//printf("---------------------------------------------------------------------");

	//printf("\n Menu");
	Details User;
	View_Acct(&User);
	Acct_creation(&User);
	View_Acct(&User);

}



















