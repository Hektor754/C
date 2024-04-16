#include <stdio.h>

main()
{
	int x,sum;
	int A[10];
	sum=0;
	for(x=0; x<10; x++)
	{
		printf("dwse arithmo:");
		scanf("%d",&A[x]);
		sum=sum+A[x];
	}
	printf("to apotelesma einai:%d",sum);
}
