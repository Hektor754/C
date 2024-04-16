#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

void init_array(int *pinakas,int n,int a,int b);
void print_array(int *pinakas,int n);
int max_array(int *pinakas,int n);

main()
{
	int i,j,n,a,b;
	int A[N];
	
	for(i=1; i<5; i++)
	{
		if(i==1)
		{
			printf("megethos pinaka:");
			scanf("%d",&n);
		}
		else if(i==2)
		{
			printf("arxh diasthmatos stoixiwn:");
			scanf("%d",&a);
			printf("telos diasthmatos stoixiwn:");
			scanf("%d",&b);
			init_array(A,n,a,b);
		}
		else if(i==3)
		{
			max_array(A,n);
			printf("\nto max einai:%d",max_array(A,N));
		}
		else
		{
			printf("\n\n");
			print_array(A,n);
		}
	}
}

void init_array(int *pinakas,int n,int a,int b)
{
	int i;
	srand(time(NULL));
	
	for(i=0; i<n; i++)
	{
		pinakas[i]=rand()%(b-a+1);
	}
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
