#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arrval = NULL, size;
    char numberList;
    printf("Please type the length of the list : ");
    scanf("%d", &size);
    arrval = (int *)malloc(size * sizeof(int));
    if (arrval == NULL){
        printf("Not enough memory in computer");
    }
    
}