#include<stdio.h>


int main()
{

  int n,i;
  
  printf("\nEnter the number:");
  scanf("%d",&n);




 int t1 = 0 , t2 = 1 ;

 int nextterm = t1 + t2;

 printf("Fibonaci series:%d,%d ",t1,t2);
 
  for(i=3;i<=n;i++)
  {
   printf("%d,",nextterm);
   t1 = t2;
   t2 = nextterm;
   nextterm = t1+t2;
  }

  return 0;
}