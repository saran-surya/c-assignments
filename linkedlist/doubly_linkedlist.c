#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node *next;
    struct node *prev;
}*stnode, *ennode;

void createnodes(int n){
    struct node *fnNode;
    int num, i;
    stnode = (struct node*) malloc(sizeof(struct node));

    if (stnode == NULL)printf("Memory cannot be allocated");
    else{
        printf("Data for node-1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->next = NULL;
        stnode->prev = NULL;
        ennode = stnode;
        if (n > 1){
            for(i = 2; i<=n; i++){
                fnNode = (struct node*) malloc(sizeof(struct node));
                if (fnNode == NULL) printf("Memory cannot be allocated");
                else{
                    printf("Data for node-%d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->prev = ennode;
                    fnNode->next = NULL;

                    ennode->next = fnNode;
                    ennode = fnNode;
                }
            }
        }
    }
}

void displaynodes(){
    struct node *temp;
    if (stnode == NULL){
        printf("The list is empty");
    } else {
        temp = stnode;
        printf("NULL");
        while(temp != NULL){
            printf("<-");
            printf("%d", temp->num);
            printf("->");
            temp = temp->next;
        }
        printf("NULL");
    }
}

int main(){
    int n;
    printf("Please enter the total elements in a linked list : ");
    scanf("%d", &n);
    createnodes(n);
    displaynodes();
    return 0;
}










