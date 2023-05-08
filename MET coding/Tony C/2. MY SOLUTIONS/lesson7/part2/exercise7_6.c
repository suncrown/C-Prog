#include<stdio.h>
#define ROW 2
#define COL 3

#include "my_functions/fill"
#include "my_functions/vector_alg"

/**
v= {3,4,1}    u= {6,7,2}
   {1,2,3};      {4,5,6};

v + u = (3+6,4+7,1+2) = (9,11,3)
        (1+4,2+5,3+6)   (5,7,8)

Write two functions, one that adds, substracts and multiplies two 2D-vectors..**/

void main(){
    int i;
    float vector1[ROW][COL];
    float vector2[ROW][COL];

    char sel;
    int op;
    printf("Please enter 1, 2 or 3 for operator Where: (1 ='+', 2= '-' and 3='*') :");
    scanf("%d",&op);
    if(op==1)
        sel = '+';
    if(op==2)
        sel = '-';
    if(op==3)
        sel = '*';
    
    vector_alg_fx(vector1,vector2,sel);

}

// TO DO *** DO THE ABOVE FOR A 2X2 MATRIX.

