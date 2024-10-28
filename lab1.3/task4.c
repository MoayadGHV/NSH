#include <stdio.h>


int main(){

	int x, y;
	char direction;


	printf("Enter coodinates from (1,1) to (4,4): ");
	scanf("%d %d", &x, &y);

	printf("Enter direction: ");
	scanf(" %c", &direction);

	while (1 <= x && x <= 4 && 1 <= y && y <= 4 )
	{	

		if (direction == 'r'){
			if (x == 4){break;}
			x++;
		} else if (direction == 'l') {
			if (x == 1){break;}
			x--;
		} else if (direction == 'u') {
			if (y == 1){break;}
			y--;
		} else if (direction == 'd') {
			if (y == 4){break;}
			y++;
		} else {
			printf("wrong direction\n");
			return 0;
		}
	}

	printf("the player has reached the boundary at (%d, %d)\n", x, y);
	return 0;
}


