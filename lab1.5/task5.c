#include <stdio.h>

int dot(int vec[], int mat[], int s);


int main(){

	int s;
	printf("Enter the size of the matrix and vector: ");
	scanf("%d", &s);


	int mat[s][s], res[s], vec[s], val;

	for (int i = 0; i < s ;i++){
		for (int j = 0; j < s ; j++){
			printf("Enter value[%d][%d] of matrix: ", i, j);
			scanf("%d", &val);
			mat[i][j] = val;
		}
	}

	for (int i = 0 ; i < s ; i++){
		printf("Enter value[%d] of vector: ", i);
		scanf("%d", &val);
		vec[i] = val;
	}

	for (int i = 0 ; i < s ; i++){
		res[i] = dot(vec, mat[i], s); 	
	}

	printf("result:\n");
	for (int i = 0; i < s;i++){
		printf("%d\n", res[i]);
	}
	

	return 0;

}



int dot(int vec[], int mat[], int s){
	int res = 0;
	for (int j = 0 ; j < s ; j++){
		res = res + (vec[j] * mat[j]);
		printf("%d , %d\n", vec[j],mat[j]);
	}
	return res;
}


