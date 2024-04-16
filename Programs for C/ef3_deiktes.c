#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int max_array(int *pinakas,int n);
void print_array(int *pinakas,int n);

main()
{
	int A[N];
	max_array(A,N);
	print_array(A,N);
	printf("\nto max einai:%d",max_array(A,N));
}
void print_array(int *pinakas,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\t%d",pinakas[i]);
	}
}

int max_array(int *pinakas,int n)
{
	int i,max;
	srand(time(NULL));
	
	for(i=0; i<n; i++)
	{
		pinakas[i]=rand()%100;
	}
	max=pinakas[0];
	for(i=1; i<n; i++)
	{
		if(pinakas[i]>max)
			max=pinakas[i];
	}
	return max;
}
