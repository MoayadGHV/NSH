#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int index[10][10];
	int x = (rand() % 11)-1;
	int y = (rand() % 11)-1;
	
	for (int i = 0; i < 10 ; i++){
		for (int j = 0; j < 10 ; j++){
			if (i == y && j == x) {
			
			printf("Hurrah!, I have found the hidden treasure\n");
			printf("I'm at %d, %d\n", i, j);
			printf("The treasure at %d, %d\n", y, x);
			return 0;
			}
		}
	}
	printf("Never found the treasure.\n");
	return 0;

}


