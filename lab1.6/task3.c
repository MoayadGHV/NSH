#include <stdio.h>
#include <stdlib.h>

int avg(int *samp, int count){
	int avg, sum = 0;
	for (int i = 0; i < count; i++){
		sum = sum + samp[i];
	}
	avg = sum / count;
}

int main(){

	int *samp = (int *) malloc(sizeof(int));
	int command = 1;
       	int counter = 1;
	printf("Enter sample: ");
	scanf("%d", samp);

	printf("do you want to add more samples? (1/0): ");
	scanf("%d", &command);			

	while (command == 1){
		samp = (int *) realloc(samp, counter*sizeof(int));
		printf("Enter sample: ");
		scanf("%d", &samp[counter]);
		printf("do you want to add more samples? (1/0): ");
		scanf("%d", &command);
		counter++;
	}

	int average = avg(samp, counter);
	for (int i = 0; i < counter;i++){

		samp[i] = samp[i] - average;
		printf("%d ", samp[i]);
	}
	printf("\n");
}



		

