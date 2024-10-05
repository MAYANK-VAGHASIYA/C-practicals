#include <stdio.h>
void main()
{
    int marks ;
    printf("Enetr your marks(0-100) :");
    scanf("%d" , &marks);

   marks>=90 ? printf("You obtian Grade A") : 
    90>marks && marks>=80 ? printf("You obtian A Grade\n") :
    80>marks && marks>=70 ? printf("You obtian B Grade\n") :
    70>marks && marks>=60 ? printf("You obtian C Grade\n") :
    60>marks && marks>=0 ? printf("you  are fail\n") :
    printf("You fail");
   

}