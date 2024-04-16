#include <stdio.h>
#include <stdlib.h>
#define LINE 5
#define COL 8

main()
{
	int A[LINE][COL],i,j;
	
	printf("A = [");
	srand(time(NULL));
	
	for(i=0; i<LINE; i++)
	{
		for(j=0; j<COL; j++)
		{
			do
			{
			
			A[i][j]=rand()%100;
			}while(A[i][j]<2 || A[i][j]>200);
			
			printf("\t%d",A[i][j]);
		}
		
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t    ]");
		
	
}
