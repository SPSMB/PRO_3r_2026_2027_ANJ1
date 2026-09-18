#include <stdio.h>

int main(){
	int yearsAtBank;
	int balance = 0;
	char accType;
	float interest;
	
	printf("Please enter your account type: \n");
	scanf("%c", &accType);
	printf("Please enter your current balance: \n");
	scanf("%d", &balance);
	printf("Please enter how many years you're at your bank: \n");
	scanf("%d", &yearsAtBank);
	
	if (yearsAtBank >= 2){
		if (accType == 'A' && balance >= 10000 && balance <= 250000){
			interest = 0.75;
		}
		else if(balance > 150000){
			interest = 0.5;
		}
		else{interest = 0;}
	}
	else if(yearsAtBank >= 1){
		if(yearsAtBank < 2){
			if(balance > 250000 && accType == 'A'){
			interest = 0.75;}
			if(balance < 250000 && accType == 'A'){
			interest = 0.5;}
		}
		if(balance > 150000 && accType != 'A'){
		interest = 0.5;}
	}
	else if (accType != 'A'){
		interest = 0.25;
	}
	
	printf("Your interest is: %.2f\n", interest);
	
	
	
	return 0;
}