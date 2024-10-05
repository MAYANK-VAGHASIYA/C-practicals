#include<stdio.h>

void main()
{
int choice;
int quntity;
float t1,t2,t3,t4,t5,totalcost;
 printf("Welcome to Foodies restornt\n");
 printf("menu\n");
 printf("1. Burger - ₹150\n");
 printf("2. Pizza - ₹200\n");
 printf("3. Pasta - ₹120\n");
 printf("4. Sandwich - ₹100\n");
 printf("1. French fries - ₹80\n");
 printf("0. Finish order\n");

 do
 {
    printf("\nEnter the number of the item you wish to order (0 to finish): ");
        scanf("%d", &choice);
       
       if(choice != 0)
       {
        printf("Enter the quntity\n");
        scanf("%d",&quntity);


        switch (choice)
        {
        case 1:

            t1 = 150*quntity;
            printf("Added %d Burger(s) to your order.\n",quntity);
            totalcost = totalcost + t1;
            break;

         case 2:
              t2 = 200*quntity;
             printf("Added %d Pizaa(s) to your order.\n", quntity);
             totalcost = totalcost+ t2;
             break;

         case 3:
            t3 = 120*quntity;
            printf("Added %d Pasta(s) to your order.\n", quntity);
            totalcost = totalcost+ t3;
            break;

         case 4:
            t4 = 100*quntity;
              printf("Added %d Sandwich(s) to your order.\n", quntity);
              totalcost = totalcost+ t4;
              break;
        
         case 5:
            t5 = 80*quntity;
             printf("Added %d French Fries(s) to your order.\n", quntity);
             totalcost = totalcost+ t5;
             break;
                    
        default:
        printf("Invalide selection. Please try again.\n"); 
           break;
        }

       }

    
 } while (choice!=0);
 
 printf("\nYour total order cost is %f",totalcost);
 printf("THANK YOU\n");
 



}