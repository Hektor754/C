#include <stdio.h>

main()
{
	int i,sum,x;
	sum=1;
	
	for(i=1; i<=10; i++)
	{
		printf("dwse ton %d-o arithmo:",i);
		scanf("%d",&x);
		sum=sum*x;
		
	}
	printf("\nto apotelesma einai: %d",sum);
}
