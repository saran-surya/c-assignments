#include<stdio.h>

void main(){
    int money[500], total = 2000, months, temp;
    money[0] = 1000;
    money[1] = 1000;
    printf("please enter the months : ");
    scanf("%d", &months);
    // months = 4;
    for(int i = 2; i < months+1; i++){
        temp = money[i-1] + money [i-2];
        money[i] = temp;
        total = total + money[i];
    }
    printf("\nthe total saved : %d", total);
}