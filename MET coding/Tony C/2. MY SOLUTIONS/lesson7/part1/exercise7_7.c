#include<stdio.h>
#define SIZE 4

#include "my_functions/fill"
#include "my_functions/mean"
#include "my_functions/std"

/**Write a program that reads in the years monthly temperatures and calculates the average
temperature for the year. Calculate the standard deviation about the mean from the formula..**/

void main(){
    int i;
    float list[SIZE];
    fill_fx(list);

    printf("The numbers entered are :");
    for(i=0; i<SIZE; i++){
        if(i != SIZE-1)
            printf("%f, ",list[i]);
        else
            printf("%f",list[i]);    
    }
    printf("\n");
    printf("The mean of the numbers is: %f\n",mean_fx(list));
    printf("The std of the numbers is: %f\n",std_fx(list));
}

