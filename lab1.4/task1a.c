#include <stdio.h>

int main(){

	int N, i, j;
	
	printf("Enter N:");
	scanf("%d", &N);
	
	char stars[N];
	for (i=0;i<N;i++){
		stars[i]=' ';
	}

	for (j=(N-1);j>=0;j--){
		stars[j]='*';
		printf("%s\n", stars);
	}

	return 0;

}


