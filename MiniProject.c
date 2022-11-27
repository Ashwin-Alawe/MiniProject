// Name - Ashwin Alawe
// Enrollment No. - 0801CS211026

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void login();
void list();
void balanceinqury();
void deposit();
void withdraw();
void transferamount();
void accountdetails();
void accounthistory();
void logout();
void end();

int ch,totalamount=10000,depoamo,withamo,transamo;
int totaldepo=0,totalwith=0,totaltrans=0;
int transferd;
int acc,pass;
char a[50];       //global variables

int main()
{
 system("cls");
 login();
 while(1)
 {
   system("cls");
   list();
   printf("\n\n\tEnter your choice : ");
   scanf("%d", &ch); 
   switch(ch)
   {
   	 case 1:
     	balanceinqury();
     	break;
     case 2:
        deposit();
        totaldepo+=depoamo;
        break;
     case 3:
        withdraw();
        if (withamo<=totalamount)
            totalwith+=withamo;
        break;
     case 4:
        transferamount();
        if (transamo<=totalamount);
            totaltrans+=transamo;
        break;
     case 5:
     	accounthistory();
     	break;
     case 6:
        accountdetails();
        break;
     case 7:
        system("CLS");
        end();
        getch();
        exit(0);
     case 8:
     	logout();
     	break;
        
     default:
        printf("\n------ Invalid Choice ------");
        printf("\nPress any key to choose again..");
        getch();
        break;
    }//end of switch
   getch();
  }//end of while
}

void login()         //for login in account
{
	  printf("\n\t\tWELCOME TO BANK MANAGEMENT SYSTEM");
    printf("\n\n\tEnter your name: ");
    gets(a);
    printf("\n\tEnter your account number: ");
    scanf("%d",&acc);
    while(1)
    {
    printf("\n\tEnter password:");
    scanf("%d",&pass);
    if(pass==12345){
    printf("\n\tLogin success..");
    printf("\n\nPress any key to continue..");
    break;}
   else  {
    printf("\n Wrong Password..");
    printf("\n\tPlease try again..");}
    }
}   

void list()              //for list of features
{
  printf("\n\t\tWELCOME TO BANK MANAGEMENT SYSTEM");
  printf("\n\n\tWhat do you want to do..");
  printf("\n\n\t1. Check Balance");
  printf("\n\t2. Deposit Amount");
  printf("\n\t3. Withdraw Amount");
  printf("\n\t4. Transfer Amount");
  printf("\n\t5. Account History");
  printf("\n\t6. Check details");
  printf("\n\t7. Exit");
  printf("\n\t8. Logout");
}
void balanceinqury()        //for checking account balance
{
	printf("\n\tTotal balance: %d",totalamount);
	printf("\n\nPress any key to continue..");
}

void deposit()               //for money deposit in account 
{
    printf("\n\tEnter the amount you want to Deposit: ");
    scanf("%d",&depoamo);  
    totalamount+=depoamo;
    printf("\n\tAmount added Succsessfully...");
    printf("\n\nPress any key to continue..");
}
void withdraw()               //for money withdraw from account
{
  while (1)
  {
  
    printf("\n\tEnter the amount you want to Withdraw: ");
    scanf("%d",&withamo);
      if (withamo<=totalamount){
        totalamount-=withamo;
        printf("\n\tAmount withdraw Succsessfully...");
        printf("\nPress any key to continue..");
        break;}
      else{
        printf("]n\tWithdraw failed..");
        printf("\n\t------ Insufficient Balance ------");}
  }
}
void transferamount()          //for money transfer
{
     
    while (1)
    {
      printf("\n\tEnter the amount you want to Transfer: ");
      scanf("%d",&transamo);  
      if (transamo<=totalamount){
        totalamount-=transamo;
        printf("\n\tEnetr Account no. where you want to transfer Money: ");
        scanf("%d",&transferd);
        printf("\n\tAmount transfered Succsessfully...");
        printf("\nPress any key to choose again..");
        break;}
      else{
        printf("\n\tTransfer failed..");
        printf("\n\t------ Insufficient Balance ------");}
    }
}
void accountdetails()            //for account details
{
	printf("\n\tYour Name=%s",a);
    printf("\n\tAccount Number=%d",acc);
    printf("\n\tTotal Amount=%d",totalamount); 
    printf("\n\tTotal Deposited Amount=%d",totaldepo); 
    printf("\n\tTotal Withdrawn Amount=%d",totalwith); 
    printf("\n\tTotal Transfered Amount=%d",totaltrans); 
    printf("\n\nPress any key to continue..");
}
void accounthistory()            //for cheking account history
{
	printf("\n\tYour account history");
    printf("\n\n\tTotal Deposited Amount=%d",totaldepo); 
    printf("\n\tTotal Withdrawn Amount=%d",totalwith); 
    printf("\n\tTotal Transfered Amount=%d",totaltrans); 
    printf("\n\nPress any key to continue..");	
}
void logout()                     //for logout from account 
{
	system("cls");
	printf("\n\tLogout successfull..");
	login();
	
}
void end()                        //for exit from program
{
    printf("\n------------------------------------\n");
    printf("\n\tYour Name=%s",a);
    printf("\n\tAccount Number=%d",acc);
    printf("\n\tTotal Amount=%d",totalamount); 
    printf("\n\tTotal Deposited Amount=%d",totaldepo);
    printf("\n\tTotal Withdrawn Amount=%d",totalwith); 
    printf("\n\tTotal Transfered Amount=%d",totaltrans); 
    printf("\n\n\t**************Thanks****************"); 
}
