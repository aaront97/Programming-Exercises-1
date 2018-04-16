#include <stdio.h>

int main (void){
	int account_number;
	float mortgage;
	float mortgage_term;
	float interest;
	printf ("Enter account number (-1 to end)\n");
	scanf ("%d", &account_number);
	while (account_number != -1 ){
		printf ("Enter mortgage amount (in dollars): \n");
		scanf ("%f", &mortgage);
		printf ("Enter mortgage term (in years): \n");
		scanf ("%f", &mortgage_term);
		printf ("Enter interest rate (as a decimal): \n");
		scanf ("%f", &interest);
		float payable = mortgage * interest * mortgage_term;
		float amount_payable = mortgage + payable;
		float monthly_payable = amount_payable / (mortgage_term*12);
		printf ("The monthly payable interest is %.0f\n", monthly_payable);
		printf ("Enter account number (-1 to end)\n");
		scanf ("%d", &account_number);
	}
}
