#include<stdio.h>
#include<string.h>
#define wordlenght 30

/**
Write a short program that counts the number of letters in a persons name which they have type
in at the keyboard
**/

void count_name(){
    char name[wordlenght];
    int i,counter;
    counter = 0;
    printf("Please enter your name: ");
    scanf("%[^\n]s",&name);

    printf("The number of letters in your name is: %d\n", strlen(name));
}

void main(){
    count_name();
}

