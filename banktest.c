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
	printf("Age: ");
	scanf("%d",&p_user->age);
	printf("Date Of birth: ");
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
	Details User;
	int input;
	printf("\t\n\nBanking Test Application\n");
	printf("---------------------------------------------------------------------");

	printf("\n\tSelect an option(1-5)>\n");
	printf("(1.) Create an account\n");
	printf("(2.) View account details\n");
	printf("(3.) Deposit into account\n");
	printf("(4.) Withdraw from account\n");
	printf("(5.) Delete account\n");
	printf("Enter Option: ");
	scanf("%d",&input);


	switch(input){
	case 1:
		Acct_creation(&User);
		break;
	case 2:
		View_Acct(&User);
		break;
	case 3:
		Deposit(&User);
		break;
	case 4:
		withdrawal(&User);
		break;
	default:
		printf("Invalid action, Please retry\n");
		break;
	}

	View_Acct(&User);
	Acct_creation(&User);
	View_Acct(&User);

}



















