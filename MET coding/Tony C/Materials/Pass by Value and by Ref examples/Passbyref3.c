#include<stdio.h>

void main(){
    int x= 10;
    int y= 12;
    int z = 14;
    

    int *ptrx = &x;
    int *ptry = &y;
    int *ptrz = &z;

    *ptrx = ++(*ptrx);
    *ptry = --(*ptry);
    
    printf("x is now %d and y is now %d\n",x,y,*ptrx,*ptry);
    
    printf("address of z is %p\n",&z);
    printf("address of ptrz is %p\n",ptrz);
    printf("The content of z by using pointer dereferencing (*ptrz) is %d \n",*ptrz); //Dereference

}