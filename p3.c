#include <stdio.h>

int main() {

    int principal = 50000;
    float rate = 5.5;
    int time = 3;


    float simple_interest = (principal * rate * time) / 100;


    printf("Principal amount: %d\n", principal);
    printf("Annual interest rate: %.2f\n", rate);
    printf("Time period: %d years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
