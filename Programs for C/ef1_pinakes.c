#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

main()
{
	int A[SIZE],x,i;
	
	do
	{
		printf("dwse arithmo metaju 20 kai 100:");
		scanf("%d",&x);
	} 
	while(x<20 || x>100);
	
	srand(time(NULL));
	
	for(i=0; i<x; i++)
	{
		A[i]=rand()%1000;
		printf("\nTo %d-o stoixio einai:%d",i,A[i]);
	}
}
