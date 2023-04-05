//Q What are the three basic output functions?

//Ans:
//1. printf()
//2. puts()
//3. putchar()
//4. fprintf()

///	printf()
#include<stdio.h>
void main(){
	printf("Hello! Welcome!!!");   
}

//	putchar()
void main2(){
	char ch = 'A';
	putchar (ch);   
}

//	puts()
void main3(){
	char name[30];
	printf("\nEnter your favourite website: ");
	gets(name);
	puts(name);
}


