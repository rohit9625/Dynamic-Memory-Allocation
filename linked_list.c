#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int count_nodes(struct node *root);
void print_data(struct node *root);

int main(){

    struct node *root = NULL;
    root = (struct node *)malloc(sizeof(struct node));

    root->data  = 12;
    root->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 14;
    current->link = NULL;
    root->link = current;

    current = malloc(sizeof(struct node));
    current->data = 16;
    current->link = NULL;
    root->link->link = current;

    // printf("DATA - %d\n",root->link->data);
    printf("Elements in the list : %d \n",count_nodes(root));
    printf("Elements of list : ");
    print_data(root);


    return 0;
}

int count_nodes(struct node *root){
    int count = 0;
    if(root == NULL){
        printf("List is empty :(\n");
    }

    struct node *ptr = NULL;
    ptr = root;
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    
    return count;
}
void print_data(struct node *root){
    if(root == NULL){
        printf("List is empty :(\n");
    }
    struct node *ptr = NULL;
    ptr = root;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}