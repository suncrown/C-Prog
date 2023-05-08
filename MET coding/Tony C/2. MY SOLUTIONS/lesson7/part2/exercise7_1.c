#include<stdio.h>
#define wordlenght 30

/**
Write a program that reads in and prints out your name and address into an array using the scanf
and printf functions
**/

void read_name_addr(){
    char name[wordlenght];
    char addr[wordlenght];
    printf("Please enter your name: ");
    scanf("%[^\n]s",name);
    
    printf("Please enter your Address: ");
    scanf("%s",addr);

    printf("\nYour name is: %s",name);
    printf("\nYour address is: %s",addr);
}

void main(){
    read_name_addr();
}

