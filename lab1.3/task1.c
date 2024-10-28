#include <stdio.h>


int main(){

	int N, i;
	float inc, j;


	printf("Enter N: ");
	scanf("%d", &N);

	printf("20 to 0:\n");

	for (i=N; i>=0;i--)
	{
		printf("%d ", i);
	}
	
	printf("\n0 to 20:\n");
        
	for (i=1; i<=N;i++)
        {
                printf("%d ", i);
        }


	printf("\nEnter increment less than 1: \n");
	scanf("%f", &inc);
	

	if ((inc < 1.0) && (inc >= 0.0)){
	       for (j=0.0;j <= N; j = j + inc){
		printf("%.2f ", j);
	} 
	
	printf("\n");

	}else{
		printf("\ninvalid input\n");
	}

	return 0;
}
		
	



	







