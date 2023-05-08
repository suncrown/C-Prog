#include<stdio.h>
#include<math.h>

void table(int x0, int x1, float(*f)(int)){
    int i;
    for(i=x0; i<x1;i++)
        printf("%d %f \n", i, (*f)(i));
}

float sqroot(int a){
    return (sqrt(a));
}

float square(int a){
    return (a*a);
}

float cube(int a){
    return (a*a*a);
}

int main(void){
    int selection;
    printf("Enter 1:for squareroot, 2: for square or 3: for cube :");
    scanf("%d", &selection);
    if (selection == 1){
        table(1,10,sqroot); /* change to sqroot or cube*/
    }

    if (selection == 2){
        table(1,10,square); /* change to sqroot or cube*/
    }
        
    if (selection == 3){
        table(1,10,cube); /* change to sqroot or cube*/
    }
    return (0);
}