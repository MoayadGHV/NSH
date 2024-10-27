#include <stdio.h>


int main(){

	int N, fa = 0, fe = 0, fi = 0, fo = 0, fu = 0, freqothers = 0;
	char letter;	
	
	printf("Enter N: ");
	scanf("%d", &N);

	printf("Enter text: ");
	
	for (int i = 0; i < N; i++){
		scanf(" %c", &letter);

		if (letter == 'a' || letter == 'A'){
			fa++;
		} else if (letter == 'e' || letter == 'E'){
			fe++;
		} else if (letter == 'i' || letter == 'I'){
			fi++;
		} else if (letter == 'o' || letter == 'O'){
			fo++;
		} else if (letter == 'u' || letter == 'U'){
			fu++;
		} else {
		       freqothers++;
		}
	}

	printf("\nfrequency of a: %d\n", fa);
	printf("frequency of e: %d\n", fe);
	printf("frequency of i: %d\n", fi);
	printf("frequency of o: %d\n", fo);	
	printf("frequency of u: %d\n", fu);
	printf("frequency of others: %d\n", freqothers);
	return 0;
}
