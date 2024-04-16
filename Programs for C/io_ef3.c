#include <stdio.h>
#define N 9

main()
{
	int i,j,n;
	
	for(i=0; i<N; i++)
	{
		for(n=1; n<=3; n++)
		{
		
			for(j=1; j<=N-i; j++)
				printf("%d",j);
			for(j=N; j>N-i; j--)
				printf("  ");
			for(j=N-i; j>=1; j--)
				printf("%d",j);
		}
		printf("\n");
	}
}
