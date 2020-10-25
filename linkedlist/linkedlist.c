#include<stdio.h>
#include<stdlib.h>
// Creatin a singly linked list

struct node
{
    int num;
    struct node *next;
}*stnode;


void createnodes(int n){
    struct node *fnNode, *temp;
    int num, i;
    stnode = (struct node*) malloc(sizeof(struct node));

    if (stnode == NULL){
        printf("Memory cannot be allocated");
    }
    else{
        printf("Data for node-1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->next = NULL;
        temp = stnode;
        if(n > 1){
            for(i=2; i<=n; i++){
                fnNode = (struct node*) malloc(sizeof(struct node));
                if (fnNode == NULL)printf("Memory cannot be allocated");
                else{
                    printf("Data for node-%d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->next = NULL;
                    temp->next = fnNode;
                    temp = temp->next;
                }
            }
        }
    }
}

void displaylist(){
    struct node *temp;
    if (stnode == NULL)printf("The linked list is empty");
    else{
        temp = stnode;
        while(temp != NULL){
            printf("%d->", temp->num);
            temp = temp->next;
        }
        printf("NULL");
    }
}

void insertAtBeginning(){
    int num;
    struct node *fnNode;
    if (fnNode != NULL){
        printf("Data for node to be inserted at beginning : ");
        scanf("%d", &num);
        fnNode = (struct node*) malloc(sizeof(struct node));
        fnNode->num = num;
        fnNode->next = stnode;
        stnode = fnNode;
    } else printf("Memory cannot be allocated");
}

void insertNodeAtEnd(){
    int num;
    struct node *fnNode, *temp;
    fnNode = (struct node*) malloc(sizeof(struct node));
    if(fnNode != NULL){
        printf("Data for node to be inserted at the end : ");
        scanf("%d", &num);
        if (stnode == NULL){
            stnode->num = num;
            stnode->next = NULL;
        } else {
            temp = stnode;
            fnNode->num = num;
            fnNode->next = NULL;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = fnNode;
        }
    }else printf("Memory cannot be allocated");
    
}

void insertNodeAtMiddle(){
    int pos, num, i;
    struct node *fnNode, *temp;
    fnNode = (struct node*) malloc(sizeof(struct node));
    if (fnNode != NULL){
        printf("Position of the node to be inserted : ");
        scanf("%d", &pos);
        fnNode->num = num;
        fnNode->next = NULL;
        temp = stnode;
        if (pos == 0){
            insertAtBeginning();
        } 
        else {
            printf("Data for the node to be inserted : ");
            scanf("%d", &num);
            for(i=0; i<pos-1; i++){
                temp = temp->next;
                if (temp == NULL){
                    insertNodeAtEnd();
                    break;
                    }
            }
            if (temp != NULL){
                fnNode->next = temp->next;
                temp->next = fnNode;
            }else{
                printf("inserting is not possible");
            }
        }
    }else printf("Memory cannot be allocated");
}

int main(){
    int n;
    printf("Please enter the total elements in a linked list : ");
    scanf("%d", &n);
    createnodes(n);
    // to insert a node at beginning uncomment the line below
    // insertAtBeginning();
    // to insert a node at ending uncomment the line below
    // insertNodeAtEnd();
    insertNodeAtMiddle();


    displaylist();
}