#include<stdio.h>

int main(){
    int total=0;
    char string[100];
    int i=0;

    printf("Enter the String : ");
    scanf("%s", string);
    while(string[i] != '\0'){
        i++;
    }
    for(total = i-1; total >= 0; total--){
        printf("%c", string[total]);
    }
}