#include<stdio.h>

int main(){
	int data;
	for(data =0; data<10; data++){
		if(data ==2)
			printf("data is now equal to %d\n", data);
		if(data <5)
			printf("data is now %d, which is less than 5\n", data);
		else
			printf("Data is now %d, which is greater than 4\n", data);
}

	return 0;

}
