#include<stdio.h>
#define wordlenght 30

/**
Write a program that reads in and prints out your name and address into an array using gets and puts
**/

void read_name_addr(){
    char name[wordlenght];
    char addr[wordlenght];
    puts("Please enter your name: ");
    fgets(name,sizeof(name),stdin);
    
    puts("Please enter your Address: ");
    fgets(addr,sizeof(addr),stdin);
    
    puts("\nYour name is: ");puts(name);  
    puts("Your address is: ");puts(addr);
    
}

void main(){
    read_name_addr();
}

