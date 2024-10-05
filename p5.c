#include<stdio.h>

void main()
{
    float fern,celc;

    printf("Enter the value of tempreture in celc::");
    scanf("%f", &celc);

    fern=(celc*9/5)+32;
    printf("%.2f clec equal to %.2f fern\n",celc,fern);
}
