#include <stdio.h>
#define SIZE 5

main()
{
	int A[SIZE];
	int i,sum;
	
	for(i=0; i<5; i++)
	{
		do
		{
			printf("dwse arithmo:");
			scanf("%d",&A[i]);
		}
		while (A[i]<1 || A[i]>8);
		sum=sum*A[i];
	}
	printf("to ginomeno einai:%d",sum);
	
	
	
}
