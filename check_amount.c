#include <stdio.h>

void main(){
    int available, withdraw;
    printf("Please enter the available amount : ");
    scanf("%d", &available);
    printf("Please enter the required amount : ");
    scanf("%d", &withdraw);
    if (withdraw <= available){
        printf("The amount of Rs : %d can be withdrawed", withdraw);
    } else {
        printf("Sorry we cannot withdraw the amount,the available balance is %d", available);
    }
    
}