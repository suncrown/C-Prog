#include<stdio.h>
#include<string.h>
#define wordlenght 50

/**
Write a program which reads in a line of text from the keyboard and also a character from the
keyboard, and then prints out the number of times that the character appeared in the line of
text
**/

// Note: strcmp is used to compare string not individual characters therefore use ==

void count_name(){
    char name[wordlenght];
    char searchchar;
    int i,comp, counter, charcount;
    charcount = 0;

    printf("Please enter your name or text less than 50 characters: ");
    scanf("%[^\n]s",&name);
    counter = strlen(name);

    printf("The number of letters in your name is: %d\n", counter);

    printf("\nPlease enter a character in your name above: ");
    scanf(" %c",&searchchar);

    printf("\n");
    for(i=0; i<counter; i++){
        if(name[i] == searchchar)
            charcount += 1;
    }

    printf("The number of times the above character appeared is: %d\n",charcount);
}

void main(){
    count_name();
}

