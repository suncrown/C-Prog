#include<stdio.h>
#include<string.h>
#include<stdlib.h>

# define SIZE 5
#include "my_functions/fill"
#include "my_functions/min"
#include "my_functions/max"

int main(){
    int list[SIZE];
    int i;
    fill(list);
    
    printf("The numbers entered are :");
    for(i=0; i<SIZE; i++){
        if(i != SIZE-1)
            printf("%d, ",list[i]);
        else
            printf("%d",list[i]);    
    }

    printf("\nThe minimum number from the array is: %d\n", minimum(list));
    printf("\nThe maximum number from the array is: %d\n", maximum(list));
    return 0;
}