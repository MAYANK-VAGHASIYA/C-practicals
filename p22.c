#include<stdio.h>

int f1(int n,int marks[]){
   
    int total = 0;

  for (int i = 0; i < n; i++) {

    total =total+marks[i];
    }

     
    return total;
   
   
}

float f2(int n,int marks[]){
   
    int sum;
    float avg;
   
    sum=f1(n,marks);
   
      
     
      avg=sum/n;
   
 
   
    return avg;
}

int f3(int n,int marks[]){
    
  int  max=marks[0];
    for(int i=0;i<n;i++){
       
       
        if(marks[i]>marks[0])
        {
        max=marks[i];    
        }
   
   
}
return max;
}



int f4(int n,int marks[]){
    int min=marks[0];
    for(int i=0;i<=n;i++){
        if(marks[i]<marks[0])
        {
            min=marks[i];
        }
    }
    return min;

}

int main(){

    int n;
   
   
   printf("Enter the value of students here::");
   scanf("%d",&n);
   
   
   int marks[n],x,z,w;
   float y;
   
    printf("Enter the CCP marks of the students:\n");

  for (int i=0; i<n;i++) {

    printf("Student %d:",i+1);

    scanf("%d", &marks[i]);
 
   }
   
    x=f1(n,marks);
   printf("\ntotal=%d",x);
   
   y=f2(n,marks);
   printf("\navg of students=%f",y);
   
   z=f3(n,marks);
   printf("\nMaximum marks:%d",z);

   w=f4(n,marks);
   printf("\nMinimum marks:%d",w);

    return 0;
}