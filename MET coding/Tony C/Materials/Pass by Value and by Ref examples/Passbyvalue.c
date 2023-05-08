#include<stdio.h>

void changecolor(char color[5]) {
	color = "Red";
    printf("The copy of the color has now changed to: %s\n",color);
}		 

void main(){
    char mycolor[5] = "Blue";

    changecolor(mycolor); //arg passed by value with a copy of mycolor.
	printf("The original color %s has not changed\n", mycolor);	//color blue remain unchanged	
}
