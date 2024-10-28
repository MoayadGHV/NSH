#include <stdio.h>

int main(){

	int cityNum, max, min, i, pop, totalPop = 0;
	float mean;

	printf("Enter number of cities: ");
	scanf("%d", &cityNum);
	for (i=0; i < cityNum; i++){
		printf("Enter population of city %d: ", i+1);
		scanf("%d", &pop);
		totalPop = totalPop + pop;
		if (i == 0){
			max = pop;
			min = pop;
		} else if (pop > max){
			max = pop;
		} else if (pop < min){
			min = pop;
		}

	}

	mean = totalPop / cityNum;
	printf("mean: %.2f\n", mean);
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	return 0;
}


		
