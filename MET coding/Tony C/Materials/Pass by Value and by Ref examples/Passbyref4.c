// A prog to find the squares of an arra of numbers.
#include<stdio.h>
#define SIZE 3

void fuct_sq(int *);

int main(void){
    int i;
    static int hold[SIZE]={3,4,5};
    fuct_sq(hold);
    for(i=0;i< SIZE;i++)
        printf("\t%d \n ",hold[i]);
        //printf("hold[%d]:\t%d\n ",i,hold[i]);
    return(0);
}

void fuct_sq(int *ptr){
    int k;
    for(k=0;k< SIZE;k++)
        *(ptr+k)= ( *(ptr+k) ) * ( *(ptr+k) ) ;
}