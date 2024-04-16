#include <stdio.h>

main()
{
	int N,i,min;
	
	do
	{
		printf("dwse enan arithmo apo to 2 mexri to 20:");
		scanf("%d",&N);
	}
	while(N<2 || N>20);
	int A[N];
	for(i=0; i<N; i++)
	{
		printf("dwse %d-o arithmo:",i+1);
		scanf("%d",&A[i]);
	}
	min=A[N-1];
	for(i=0; i<N; i++)
	{
		if(A[i]<min)
		{
		 min=A[i];
		}
		
	}
	printf("to elaxisto einai:%d",min);
}
