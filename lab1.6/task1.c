#include <stdio.h>
#include <stdlib.h>

void multiplication(int *x, int *y, int *z, int a, int b, int s){	
	for (int i = 0; i<s;i++){
		z[i] = (a * x[i]) + (b * y[i]);
	}
}	
	

int main(){
	
	int s, a, b;
	printf("z = ax + by Calculator\n");
	printf("Enter the size of the vectors: ");
	scanf("%d", &s);
	
	int *x = (int*) malloc(s *sizeof(int));
	int *y = (int*) malloc(s *sizeof(int));
	int *z = (int*) malloc(s *sizeof(int));
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	for (int i = 0; i < s;i++){
		printf("Enter x{%d} :", i+1);
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < s;i++){
		printf("Enter y{%d} :", i+1);
		scanf("%d", &y[i]);
	}

	multiplication(x, y, z, a, b, s);

	printf("the result is:\n");
	printf("[%d, %d, %d]\n", z[0], z[1], z[2]);

	free(x);
	free(y);
	free(z);
}
	
