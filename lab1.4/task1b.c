#include <stdio.h>

int main(){

	int N, i, j;
	
	printf("Enter N:");
	scanf("%d", &N);
	j = (N-1);
	char stars[N];

	for (i=0;i<N;i++){
		stars[i]=' ';
	}

	while (j>=0){
		stars[j]='*';
		printf("%s\n", stars);
		j--;
	}

	return 0;

}


