#include<stdio.h>
#include<string.h>

void changecolor(char (*color)[5]) { //Content extractor if given a variable address
	strcpy(*color, "Red");
    printf("The argument is passed by ref to changed the original color to: %s\n",color);
}		 

void main(){
    char mycolor[5] = "Blue";
    printf("My original color is: %s\n",mycolor);

    changecolor(&mycolor); //arg passed by value with a copy of mycolor.
	printf("The function has now changed the original color to: %s\n", mycolor);	//color blue has now changed	
}
