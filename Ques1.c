//WAP to allocate memory to store 5 prices(float)
#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr = (float *)calloc(5, sizeof(float));

    // ptr[0] = 10.2;
    // ptr[1] = 12.1;
    // ptr[2] = 15.23;
    // ptr[3] = 11.01;
    // ptr[4] = 9.99;

    for(int i=0; i<5; i++){
        printf("%.2f  ",ptr[i]);
    }

    return 0;
}