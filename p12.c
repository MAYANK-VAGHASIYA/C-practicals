#include<stdio.h>

void main()
{

int total_days = 100 ;
int cost_per_event = 200;
int total_budget = 0;
  for(int day = 2 ; day <= total_days ; day +=2){
    total_budget += cost_per_event;

  }
printf("Total budget for all even days is %d\n",total_budget);


}


