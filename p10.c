#include<stdio.h>

void main()
{
int x;
printf("Enter the value of which you want to timer :");
scanf("%d", &x);

for (int i = x; i>=0; i--)
{
    sleep(1);
    printf("%d \n",i);
}




}