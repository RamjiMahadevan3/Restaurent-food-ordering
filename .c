#include <stdio.h>

int main()
{
    int a,b,net=0,i=1,d=0,e,f,totamt,H;
    char g[100];
    printf("\nHELLO WELCOME TO BISTRO 24/7 CAFE ");
    printf("\nPLEASE ENTER YOUR NAME : ");
    gets(g);
    printf("\nHELLO %s !!!! HOPE YOU ARE HAVING A GOOD DAY",g);
    do{
    printf("\n\n\t\t\tBISTRO 24/7 CAFE\n");
     printf("................MENU....................................\n");

    printf("Item Code        Description                Price(Rs)\n");

    printf("1----------------Burger-------------------------180\n");
    printf("2----------------Chicken Pizza(12inch)--------- 250\n");
    printf("3----------------Fried Chicken(1pc)-------------85\n");
    printf("4----------------Grilled Chicken(half)----------250\n");
    printf("5----------------Noodles----------------------- 180\n");
    printf("6----------------Pasta--------------------------240\n");
    printf("7----------------Oreo Shake---------------------180\n");
    printf("8----------------Cold Coffee --------------------65\n");
    printf("9----------------Cappuccino----------------------70\n");
    printf("10---------------COFFEE--------------------------15\n");
    printf("11---------------TEA-----------------------------10\n");
    printf("12---------------MILK SHAKE----------------------50\n");
    printf("13---------------Coke----------------------------45\n\n");
    printf("\n\t\t\t\t\t\t\t\tRATES NOT INCLUSIVE OF TAXES");
    printf("\nEnter Your choice  : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("\nYou have selected Burger");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*180);
        break;
    case 2:
        printf("\nYou have selected Chicken Pizza (12inch)");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*250);
        break;
    case 3:
        printf("\nYou have selected Fried Chicken(1pcs)");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*85);
        break;
    case 4:
        printf("\nYou have selected Grilled Chicken(half)");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*250);
        break;
    case 5:
        printf("\nYou have selected Noodles");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*180);
        break;
    case 6:
        printf("\nYou have selected Pasta");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*240);
        break;
    case 7:
        printf("\nYou have selected Oreo Shake");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*180);
        break;
    case 8:
        printf("\nYou have selected Cold Coffee");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*65);
        break;
    case 9:
        printf("\nYou have selected Cappuccino");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*70);
        break;
    case 10:
        printf("\nYou have selected Coffee");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*15);
        break;
    case 11:
        printf("\nYou have selected Tea");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*10);
        break;
    case 12:
        printf("\nYou have selected MILK SHAKE");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*50);
        break;
    case 13:
        printf("\nYou have selected Coke");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);
        net+=(b*45);
        break;
    default:
        printf("\nSorry item out of stock");
        break;

    }
    printf("\nLEAVING SO SOON?");
    printf("\nIF YOU WANT TO ORDER AGAIN ENTER 1 ELSE ENTER ANY NUMBER : ");
    scanf("%d",&i);}while(i==1);


    printf("\nTOTAL AMOUNT IS : %d",net);
    printf("\nDO YOU WANT TO DINE IN OR TAKE AWAY OR LOOKING FOR DELIVERY?");
    printf("\nPRESS 1 FOR DINE IN PRESS 2 FOR TAKE AWAY 3 FOR DELIVERY : ");
    scanf("%d",&e);
    if(e==2)
    {
        printf("\nTAKE AWAY CHARGES          : 22");
        printf("\nTAXES AND CHARGES          : 10");
        net+=32;
        printf("\nTOTAL AMOUNT TO BE PAID IS : %d",net);
        printf("\nTHANKYOU VISIT AGAIN");
        printf("\nHAVE A GOOD DAY");
    }
    else if(e==3)
    {
        printf("PLEASE ENTER YOUR CONTACT NUMBER : ");
        scanf("%d",&f);
        printf("ONE OF OUR EXCECUTIVE WOULD SHORTLY CALL THIS NUMBER TO CONFIRM YOUR ADDRESS AND FOR OTHER DELIVERY DETAILS.");
        printf("\nDELIVERY CHARGES           : 60");
        printf("\nPACKAGE CHARGES            : 28");
        printf("\nTAXES AND CHARGES          : 12");
        net+=100;
        printf("\nTOTAL AMOUNT TO BE PAID IS : %d",net);
        printf("\nTHANKYOU VISIT AGAIN");
        printf("\nHAVE A GOOD DAY");
    }
    else
    {
        printf("\nTAXES AND CHARGES          : 8");
        net+=8;
        printf("\nTOTAL AMOUNT TO BE PAID IS : %d",net);
        printf("\nTHANKYOU VISIT AGAIN");
        printf("\nHAVE A GOOD DAY");
    }
    return 0;
}
