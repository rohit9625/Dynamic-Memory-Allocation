//WAP to allocate memory of size n, where n is entered by the user
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter size of memory to be allocate (n X 4 bytes)\n");
    scanf("%d",&n);

    int *ptr = (int *)calloc(n,sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated :(\n");
    }else{
        printf("Memory of %d bytes succesfully allocated using calloc :)\n",sizeof(ptr[0])*n);
    }

    return 0;
}