#include <stdio.h>


int main(){

	int popul[10], min, max;
	float avg = 0.0;

	for (int i = 0; i < 10 ; i++){
		printf("Enter the population of city %d: ", i+1);
		scanf("%d", &popul[i]);
		avg = avg + popul[i];
		if(i == 1){
			min = popul[1];
			max = popul[1];
		}
		if(max < popul[i]){
			max = popul[i];
		}else if(min > popul[i]){
			min = popul[i];
		}

	}

	for (int j = 9; j >= 0 ; j--){
		printf("population of city %d: %d\n", j+1, popul[j]);
		
	}

	printf("Average: %.2f\n", avg/10);
	printf("Min: %d,Max: %d\n", min, max);
        return 0;
}       

		

