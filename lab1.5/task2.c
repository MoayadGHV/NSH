#include <stdio.h>

int main(){

	int a = 1;
	char *ptr = (char *)&a;

	for (int i = 0; i<4;i++){
		printf("address %p has 0x%08x \n",(ptr+i), *(ptr+i));
	}
	if(*ptr == 1){
		printf("Little Endian\n");
	}else{
		printf("Big Endian\n");
	}
	
	printf("The architecture is %ld: \n", sizeof(char *) * 8);
	



	return 0;
}
