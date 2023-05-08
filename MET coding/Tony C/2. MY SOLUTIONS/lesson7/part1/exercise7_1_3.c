#include<stdio.h>
#define size 5
#include "my_functions/sort"
#include "my_functions/avg"

/**
 1. Write a program that uses an array and that reads in the exam marks of a class (10 students) and
calculates the average class mark.
2. Write a program which reads 10 numbers into an array and then sorts the values from smallest
to largest.
3. Repeat exercise 2 only this time pass the array to a function which will do the sorting**/

int main(){
    //int list[size]= {5,6,7,3,0};
    int i, list[size];
    for(i=0; i<size;i++){
        printf("Please enter an integer:");
        scanf("%d",&list[i]);
    }
    printf("All the numbers entered in the array are : ");
    for(i=0; i<size;i++){
        printf("%d",list[i]);
    }
    printf("\n");
    printf("All the numbers in the array are now sorted: ");sort(list);
    printf("The average of all the numbers in the array is: %f",avg(list));
    return 0;
}