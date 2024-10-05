#include<stdio.h>
void main()
{
    int suman,raman;
    int rb=12000000,rp=6000000,rc=3000000;
    int sb=11000000,sp=8000000,sc=8000000;
     suman =sb+sp+sc;
     raman =rb+rp+rc;
    printf("TOtal wealth of suman is %d\n",suman);
    printf("TOtal wealth of raman is %d\n",raman);


    if(suman>raman)
    {
        printf("Suman is wealthier");
    }
    else{
        printf("Raman is wealthier");
    }
     
}