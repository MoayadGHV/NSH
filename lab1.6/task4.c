#include <stdio.h>
#include <stdlib.h>

int *stack = NULL;
int ind = 0;

void push(){
	stack = (int *)realloc(stack, (ind+1)*sizeof(int));
	printf("Enter an integer: ");
	scanf("%d", &stack[ind]);
	ind++;
}

void pop(){
	
	if (ind > 0){
		printf("%d\n", stack[ind-1]);
		stack = (int *)realloc(stack, (ind)*sizeof(int));
		ind--;
	} else {
		printf("nothing in stack\n");
	}

}

void display(){
	for(int i = 0 ; i < ind; i++){
		printf("%d ", stack[i]);
	}
	printf("\n");
}




int main(){
	char c;	
	printf("Stack Simulator.\n");
	
	while (c != 'e'){
		printf("Enter a command (p: push, o: pop, d: display contents, e: exit): ");
		scanf(" %c", &c);

		if (c == 'p'){
			push();
		} else if(c == 'o'){
			pop();
		} else if(c == 'd'){
			display();
		} else if(c != 'e'){
			printf("wrong input!\n");
		}
	}

	printf("simulation ended\n");
}




