#include<stdio.h>
#define SIZE 3

#include "my_functions/fill"
#include "my_functions/vector_alg"

/**
v + u = (3+6,4+7,1+2) = (9,11,3)
v * u = 3*6 + 4*7 + 1*2 = ?
Write two functions, one that adds two vectors and one that multiplies two vectors..**/

void main(){
    int i;
    float vector1[SIZE];
    float vector2[SIZE];

    vector_alg_fx(vector1,vector2);

}
    

