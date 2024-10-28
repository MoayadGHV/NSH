#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int rgb[3][10][10];
	int gray[10][10];
	

	for (int i = 0; i < 3 ; i++){
		for (int j = 0; j < 10 ; j++){
			for (int k = 0; k < 10; k++){
				int randomV = rand() % 256;

				rgb[i][j][k] = randomV;
			}
		}
	}
		for (int i = 0; i < 10 ; i++){
			for (int j = 0; j < 10; j++){
				gray[i][j] = (0.299 * rgb[0][i][j]) + (0.587 * rgb[1][i][j]) + (0.114 * rgb[2][i][j]);
			}
		}

	printf("RGB:\n");
	for (int i = 0; i < 3 ; i++){
		for (int j = 0; j < 10; j++){
			for (int k = 0; k < 10 ; k++){
				printf("%d, ", rgb[i][j][k]);
			}
			printf("\n");
		}
		printf("\n---------------------\n");
	}
	printf("\nGrayscale:\n");

	for (int j = 0; j < 10; j++){
                for (int k = 0; k < 10 ; k++){
                        printf("%d, ", gray[j][k]);
                }
                printf("\n");
        }
	return 0;

}

