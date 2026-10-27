#include <stdio.h>

float current_balance = 5000.00;
float withdraw_amount;
float deposit_amount;
int default_password = 1234;
int ch;

void menu(){
    
    printf("\n1. Check balance\n");
    printf("2. Deposit amount\n");
    printf("3. Withdraw money\n");
    printf("4. Exit\n");
    printf("Enter code:");
    scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nYour current balance : %f\n\n",current_balance);
                break;
            case 2:
                printf("\nEnter the deposit amount:");
                scanf("%f",&deposit_amount);
                if(deposit_amount > 0){
                    current_balance += deposit_amount;
                    printf("\nSuccessfully deposited amount of %fINR\nCurrent balance is %fINR\n",deposit_amount,current_balance);
                }else{
                    printf("\nDeposit amount can't be negative or zero");
                }
                break;
            case 3:
                printf("\nEnter withdraw amount:");
                scanf("%f",&withdraw_amount);
                if(withdraw_amount > 0 && withdraw_amount <= current_balance){
                    printf("\nSuccessfuly withdrew:%fINR \n Current balance:%f\n",withdraw_amount,current_balance);
                }else{
                    printf("\nInvalid withdraw amount");
                }
                break;
            case 4:
                printf("\n=== THANK YOU COME AGAIN ===\n");
                break;
            default:
                printf("\nInvalid option");
        }
    }



void verifypin(){
    
    int ep;

    printf("Enter your pin:");

    scanf("%d",&ep);

    if(ep == default_password && default_password){

        while(ch !=4 ){
            menu();
        }

    }
    else{
        printf("Invalid pin\n\n");
        printf("Enter\n1. Try again\n2. Exit\n");
        int nc;
        scanf("%d",&nc);

        while(nc == 1 || nc == 2){

        switch (nc){
            case 1:
                verifypin();
                break;
            case 2:
                printf("=== THANK YOU COME AGAIN ===\n");
                break;
            default:
                printf("choose valid option\n");
            }


        }
        

    }

}


int main(){

  printf("=== WELCOME ===");
  verifypin();
  return 0;

}
