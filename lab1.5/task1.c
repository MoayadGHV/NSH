#include <stdio.h>

int main(){

	char cArr[4];
	char *cptr = cArr;
	
	int iArr[4];
	int *iptr = iArr;

	short sArr[4];
	short *sptr = sArr;

	double dArr[4];
	double *dptr = dArr;

	for (int i = 0; i<4;i++ ){
		printf("%p\n", cptr+i);
	}
	printf("-------------\n");
	for (int i = 0; i<4;i++ ){
		printf("%p\n", iptr+i);
	}
	printf("-------------\n");
	for (int i = 0; i<4;i++ ){
		printf("%p\n", sptr+i);
	}
	printf("-------------\n");
	for (int i = 0; i<4;i++ ){
		printf("%p\n", dptr+i);
	}
	printf("-------------\n");
	return 0;
}
