#include <stdio.h>
#include <stdlib.h>
#define N_STUDENT 5


int main(void)
{
	int i;
	int grade[N_STUDENT];
	printf("enter 5 scores: \n");
	
	for(i=0; i<N_STUDENT; i++)
		scanf("%d", &grade[i]);
		
	for(i=0; i<N_STUDENT; i++)
		printf("grade[%d] = %d\n", i, grade[i]);
		
	return 0;
}
