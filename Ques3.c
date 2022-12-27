//WAP to allocate memory for 5 integers and then dynamically increase it to store 8 integers
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int *)calloc(5,sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated :(\n");
    }else{
        realloc(ptr, 8);
        printf("Memory reallocated for storing 8 integers :)\n");
    }

    return 0;
}