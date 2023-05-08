#include<stdio.h>

int main(){
	int event;
	char heat;
	float time;
	
	event = 5;
	heat = 'C';
	time = 27.25;

	printf("The wining time in heat %c", heat);
	printf(" of event %d was %f\n", event, time);
	return 0;
}
