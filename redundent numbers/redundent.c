// C program to store words in an array 

#include <stdio.h> 

void main() 
{ 
	int i, j; 
	int size;
    scanf("%d", &size);
	char array[size][20]; 
    int count[size];
    for(i = 0;i<size;i++){
        count[i] = 0;
    }
	for (i = 0; i < size; i++){
		scanf("%s", array[i]); 
    } 
	for (i = 0; i < size; i++){
        for(j = i+1; j<size; j++){
            array[i] == array[j] ? printf("T\n") : printf("F-----%s\t%s\n",array[j], array[i]);
        }
    }
    for (i = 0; i<size;i++){
        printf("%d\n", count[i]);
    }
} 
