#include<stdio.h>

void main()
{
    int num_1;
    int num_2;
    char oprator;
    int sum;

    printf("Enter the num_1::");
    scanf("%d",&num_1);

    printf("Enter the num_2::");
    scanf("%d",&num_2);

    printf("Enter oprator(+ ,-,*,/)::");
    scanf(" %c",&oprator);

    switch(oprator)
    {
    case '+':
        sum=num_1+num_2;
        printf("%d",sum);
        break;
    case'-':
         printf("%d-%d=%d",num_1,num_2,num_1-num_2);
         break;
    case'*':
         printf("%d*%d=%d",num_1,num_2,num_1*num_2);
         break;
    case'/':
        if(num_2!=0){
         printf("%d/%d=%d",num_1,num_2,num_1/num_2);}
         else{
            printf("Error division by zero is not allowed");
         }
         break;
    default:
        printf("Error oprator is not valied");
        break;



    }
}
