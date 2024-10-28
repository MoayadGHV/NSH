#include <stdio.h>

int main(){

	int N, i;
	printf("Enter N: ");
	scanf("%d", &N);

	for (i=2; i < N; i++){

		if (N % i == 0){
			printf("\nis not prime\n");
			return 0;
		}
	
	}
	printf("Is prime.\n");
	return 0;
}
