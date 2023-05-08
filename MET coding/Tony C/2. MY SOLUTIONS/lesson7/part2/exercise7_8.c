#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define noofword 5
#define wordlenght 50


/**
Write a program in which the user enters 5 cities. The program should store them first and then
display them to the user
**/

// Note: strcmp is used to compare string not individual characters therefore use ==

void count_name(){
    char citylist[noofword][wordlenght];
    int i;

    for(i=0; i<noofword; i++){
        //printf("Please enters 5 cities in the form:'city1','city2',... :");
        printf("Please enters city %d :",i+1);
        scanf("%s",&citylist[i]);
    }
    

    for(i=0; i<noofword; i++){
        printf("%s, ",citylist[i]);
    }

}

void main(){
    count_name();
}

