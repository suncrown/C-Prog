#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define wordlenght 50

/**
Write a program which reads in a line of text from the keyboard and also a character from the
keyboard, and then prints out the number of times that the character appeared in the line of
text
**/

// Note: strcmp is used to compare string not individual characters therefore use ==

void count_name(){
    char name[wordlenght];
    char makeupper[wordlenght];
    int i,comp, counter, charcount;
    charcount = 0;

    printf("Please enter your name or text less than 50 characters: ");
    scanf("%[^\n]s",&name);
    counter = strlen(name);

    printf("The number of letters in your name is: %d\n", counter);

    while (name[i] != '\0') {
        name[i] = toupper(name[i]);
        i++;
    }



    printf("The capitalized version of your entry is: %s\n",name);
}

void main(){
    count_name();
}

