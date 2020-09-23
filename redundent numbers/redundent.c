// C program to store words in an array 

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
int main() 
{ 
    int i,j,n;
    bool flag;
    printf("Enter the size of array : ");
    scanf("%d", &n); 
  
    // Declaration of 2-D char array 
    char array[n][20]; 
  
    // Initialization of 2-D char array 
    for (i = 0; i < n; i++) 
        scanf("%s", array[i]); 
  
    // print the words 
    for(i = 0; i<n;i++){
        flag = true;
        for(j = 0; j<n;j++){
            if(strcmp(array[i], array[j]) == 0 && j != i){
                flag = false;
                break;
            }
        }
        if(flag == true){
            printf("%s\t", array[i]);
        }
    }
    return 0; 
} 
