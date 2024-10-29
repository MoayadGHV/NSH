#include <stdio.h>

int addi(int a, int b);
float addf(float a, float b);

float circleArea(float rad);
int recArea(int x, int y);
int fact(int n);


int main(){

	float x = 2;
	float y = 3;
	float r = 5.0;
	int n = 4;
	printf("Sumation of two float: %.2f\n",addf(x, y));
	x = (int) x;
	y = (int) y;
	printf("Sumation of two integers: %d\n", addi(x, y));
	printf("Area of Circle: %.2f\n", circleArea(r));
	printf("Area of rectangle: %d\n", recArea(x, y));
	printf("%d Factorial: %d\n", n, fact(n));
	return 0;
}

int addi(int a, int b){
	return a+b;
}

float addf(float a, float b){
	return a + b;
}

float circleArea(float rad){
	return 3.14*(rad*rad);

}

int recArea(int x, int y){
	return x * y;
}
int fact(int n){
	if (n == 1){
		return 1;
	}else{
		return n * fact(n-1);
	}
}
