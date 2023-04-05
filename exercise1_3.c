#include<stdio.h>
#define size 5
#include "my_functions/sort"
#include "my_functions/avg"

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