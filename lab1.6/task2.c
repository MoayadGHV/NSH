#include <stdio.h>
#include <stdlib.h>


int main(){
	
	char c;
	int counter = 0;
	char *str = (char *) malloc(sizeof(char));
	char *rvrs = (char *) malloc(sizeof(char));
	printf("Enter the String: ");

	for (int i = 0 ; c != '\n'; i++){
		
		c = getc(stdin);

		str = (char *)realloc(str, (i+1) * sizeof(char));

		str[i] = c;
		counter++;
	}
	
	for (int i = 0; i <= counter; i++){
		rvrs = (char *)realloc(rvrs, (i+1) * sizeof(char)); 	 
		rvrs[i] = str[counter-i];
		str = (char *)realloc(str, (counter - i) * sizeof(char));
		printf("%c", rvrs[i]);
	}
	printf("\n");

}


