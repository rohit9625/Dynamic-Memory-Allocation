//WAP to allocate memory to store 5 odd numbers and then reallocate it to store 6 even numbers
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr = (int *)calloc(5,sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    printf("Odd Numbers : ");
    for(int i=0; i<5; i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");

    //reallocation
    realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    printf("After reallocation :-\n");
    printf("Even numbers : ");
    for(int i=0; i<6; i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");

    return 0;
}