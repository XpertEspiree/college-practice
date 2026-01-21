#include<stdio.h>
int main(){
	int balance=0;
	int spin=1234, pin,menu,amount;
	printf("Enter pin code: ");
	scanf("%d", &pin);
	
	if(spin==pin){
		printf("Menu\n");
		printf("1.Balance Inquiry. \n2.Cash Withdrawal. \n3.Deposit. \n4.Exit. \nSelect menu: ");
		scanf("%d", &menu);
		
		
		switch(menu){
			case 1:
				printf("Your current balance is = %d", balance);
				break;
				
				case 2:
				printf("Enter amount: ");
				scanf("%d", &amount);

				if(balance<amount){
					printf("Insufficient balance.");
				}else{
					balance-=amount;
					printf("Withdrawal amount = %d\n", amount);
					printf("Remaining balance = %d\n", balance);
				}
				break;
				
				case 3:
					printf("Enter amount: ");
					scanf("%d", &amount);
					balance += amount;  
					printf("Total balance = %d", balance);
					printf("Amount deposited successfully\n");
					
					case 4:
						printf("Exit");
						break;
						default:
							printf("Invalid menu selection. \n");
				
				
			
				}
		
		
	}else{
		printf("Incorrect pin.");
	}
}

