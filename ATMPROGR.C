#include<stdio.h>
int main()
{
int pin =1234;
int enteredpin;
int choice;
float balance= 5000;
float amount;
printf("====WELCOME TO ATM====\n");
printf("Enter your pin:");
scanf("%d",&enteredpin);
if (enteredpin !=pin)
{
  printf("Invalid pin!\n");
  return 0;
}
printf("\nLogin Successful!\n");
do
{
  printf("\n====ATM MENU ====\n");
  printf("1. Check balance \n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("4. Exit\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  switch (choice)
  {
     case 1:
	  printf("Your Balance: Rs.%2f\n",balance);
	  break;
    case 2:
	 printf("Enter deposit amount:");
	 scanf("%f",&amount);
	 if (amount>0)
	 {
	   balance=balance+amount;
	   printf("Money Deposited Successfully!\n");
	   printf("New Balance: Rs.%2f\n",balance);
	 }
	 else
	 {
	   printf("Invalid Amount!\n");
	 }
	 break ;
    case 3:
	 printf("Enter withdrawal amount:");
	 scanf("%f",&amount);
	 if(amount<=0)
	 {
	   printf("Invalid Amount!\n");
	 }
   else if (amount<= balance)
   {
     balance =balance-amount;
     printf("Please Collect Your Cash.\n");
     printf("Remaining Balance: Rs.%2f\n",balance);
   }
   else
   {
     printf("Insufficient Balance!\n");
   }
   break;
  case 4:
     printf("Thank you for using ATM!\n");
     break;
  default:
     printf("Invalid choice!\n");
  }
  }
  while(choice !=4);
  return 0;
  }