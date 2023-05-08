#include<stdio.h>

int main(){
    static char *ptr = "HELLO";
    static int i = 42;
    static int *num = &i;
    char name[50];
    puts("Enter your name:");
    fgets(name,sizeof(name),stdin);
    puts(ptr);
    puts(name);
    printf("is now: %d",*num);
    return 0;
}