#include <stdio.h>


int main(){

	int M;
	
	printf("Enter minutes: ");
	scanf("%d", &M);

	for (int i=0;i < M; i++){

		for (int j = 0; j < 60 ; j++){
			printf("%02d:%02d\n", i, j);
		}
	}
	return 0;
}
