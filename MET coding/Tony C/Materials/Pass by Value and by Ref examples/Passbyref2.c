#include<stdio.h>
// A prog to swap the contents of 2 variables. Given a=2 and b=3, the swap fx will make a=3 and b=2.

void swap (int *a, int *b){ //pointer *a and *b are Content extractors if given variable addresses.
    int hold;
    hold = *a;
    *a = *b;
    *b = hold;
    printf("The values are now swapped a=%d, b=%d." ,*a,*b);
}

void main(){
    int a = 8;
    int b = 20;
    printf("The original values are a=%d and b=%d\n",a,b);
    swap(&a, &b); //The args in the calling fx are the variable addresses in the memory.
}