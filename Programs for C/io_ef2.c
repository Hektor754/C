#include <stdio.h>
#define N 120
main()
{
	int i,j;
	
	for(i=1; i<=N; i++)
	{
		for(j=1; j<=i; j++)
			printf("*");
		for(j=1; j<=N-i; j++)
			printf(" ");
			
		for(j=1; j<=N-i; j++)
			printf(" ");
		for(j=1; j<=i; j++)
			printf("*");
	
	printf("\n");
	}
}
