#include<stdio.h>
#include<math.h>

//Develop a program of your choice that uses the logical operators ||, ! and &&.
// A Quizz game

int main(){
int question, num, square;
int level1=0;
char Y, N, c;

printf("Please select a question number below\n");
printf("Enter '1' to select Question 1\n");
printf("Enter '2' to select Question 2\n");
scanf("%d", &question);

if  (question == 1 || question == 2){
	printf("You have selected question: %d\n",question);
	if (question == 1){	
		printf("Enter a number between 0  and 4\n");
		scanf("%d", &num);
		if (num == 1 || num == 2 || num == 3){
			level1 = 1;
			printf("You have entered %d, You are Correct\n",num);
			printf("Do you want to proceed to Level 2? Y/N :");
		
			getchar();
   			c = getchar();
		
       			printf("Character entered is :%c \n",c);

			if (c == 'Y'){
				printf("What is the square of %d?\n",num);
				scanf("%d", &square);
		

				if  (square ==num*num && level1==1){
					printf("You have entered %d, You are Correct\n",num*num);
					printf("Congratualations! You have completed this quiz\n");
				}
				else
					printf("Sorry, that is a wrong answer. The correct answer is: %d\n",num*num);
			}
		}
		else
			printf("Enter number only between 0 and 4, you have entered %d\n",num);
	}	
	if (question ==2){
		printf("Enter a number between 5  and 10\n");
                scanf("%d", &num);
                if (num == 6 || num == 7 || num == 8 || num ==9){
                        level1 = 2;
                        printf("You have entered %d, You are Correct\n",num);
                        printf("Do you want to proceed to Level 2? Y/N :");

                        getchar();
                        c = getchar();

                        printf("Character entered is :%c \n",c);

                        if (c == 'Y'){
                                printf("What is the square of %d?\n",num);
                                scanf("%d", &square);


                                if  (square ==num*num && level1==1){
                                        printf("You have entered %d, You are Correct\n",num*num);
                                        printf("Congratualations! You have completed this quiz\n");
                                }
                                else
                                        printf("Sorry, that is a wrong answer. The correct answer is: %d\n",num*num);
                        }
                }
                else
                        printf("Enter number only between 5 and 10, you have entered %d\n",num);

	}
}
else
	printf("That is an invalid entry! Please enter 1 or 2 ONLY\n");


return 0;
}
