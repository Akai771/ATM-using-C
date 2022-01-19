// XYZ Bank //


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct User
{
    char name[50];
    int pass;
    int amount;
};

// Introduction //
void hello()
{
    printf ("************************************\n");
    printf("\tWelcome to XYZ Bank\n");
    printf ("************************************\n");
}

// Ending //
void end()
{
    printf ("\n\n*******************************************\n");
    printf("\tThank You! Have a nice day\n");
    printf ("*******************************************\n");
}

int main()
{
    hello();
    struct User user[3];
    int i;
    user[1].amount;
    user[1].pass;
    user[1].name;

    printf("Enter User's name: ");
    scanf("%s", &user[1].name);

    printf("Enter Password for your account: ");
    scanf("%d", &user[1].pass);

    printf("Enter Amount to be deposited: ");
    scanf("%d", &user[1].amount);

    printf("\n\t*** User's name      : %s ***\n\t*** User Password    : %d ***\n\t*** Amount Deposited : %d ***\n", user[1].name , user[1].pass , user[1].amount);

    printf("\n");

    user[2].pass;
    user[2].amount;
    user[2].name;

    printf("Enter User's name: ");
    scanf("%s", &user[2].name);

    printf("Enter Password for your account: ");
    scanf("%d", &user[2].pass);

    printf("Enter Amount to be deposited: ");
    scanf("%d", &user[2].amount);

    printf("\n\t*** User's name      : %s ***\n\t*** User Password    : %d ***\n\t*** Amount Deposited : %d ***\n", user[2].name , user[2].pass , user[2].amount);

    printf("\n");

    user[3].pass;
    user[3].amount;
    user[3].name;

    printf("Enter User's name: ");
    scanf("%s", &user[3].name);

    printf("Enter Password for your account: ");
    scanf("%d", &user[3].pass);

    printf("Enter Amount to be deposited: ");
    scanf("%d", &user[3].amount);

    printf("\n\t*** User's name      : %s ***\n\t*** User Password    : %d ***\n\t*** Amount Deposited : %d ***\n", user[3].name , user[3].pass , user[3].amount);

    printf("\n");
    
    int inp,amt,rem;
    printf ("************************************\n");
    printf("Enter password : ");
    scanf("%d", &inp);
    
    if(inp == user[1].pass)
        {
            printf("Welcome %s\n",user[1].name);
            
            printf ("\nEnter amount to be withdrawn : ");
            scanf("%d",&amt);
            
            if(amt > user[1].amount)
                printf("Amount exceeds current balance");
                
            else(amt < user[1].amount);
                printf("Amount successfully withdrawn\n");
                rem = user[1].amount - amt;
                printf("\nRemaining Balance : %d", rem);
            
        }
        
    else if(inp == user[2].pass)
        {
            printf("Welcome %s\n",user[2].name);
            
            printf ("\nEnter amount to be withdrawn : ");
            scanf("%d",&amt);
            
            if(amt > user[2].amount)
            {
                printf("Amount exceeds current balance");
            }
            else if(amt < user[2].amount);
            { 
                printf("Amount successfully withdrawn\n");
                rem = user[2].amount - amt;
                printf("\nRemaining Balance : %d", rem);
            }
        }
        
    else if(inp == user[3].pass)
        {
            printf("\tWelcome %s\n",user[3].name);
            
            printf ("\nEnter amount to be withdrawn : ");
            scanf("%d",&amt);
            
            if(amt > user[3].amount)
            {
                printf("Amount exceeds current balance");
            }
            else if(amt < user[3].amount)
            {
                printf("Amount successfully withdrawn\n");
                rem = user[3].amount - amt;
                printf("\nRemaining Balance : %d", rem);
            }
            
        }
    
    else if(inp != user[i].pass)
    {
        printf("Invalid Password");
    }
    end();
    return 0;
}

