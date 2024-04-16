#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 21
main()
{
	int **p;
	int N,i,j;
	int pinakas[M][M];
	srand(time(NULL));
	
	do{
		printf("dwste diastaseis pinaka me eyros apo 5 mexri 20:");
		scanf("%d",&N);
	
		}
	while(N<5 || N>20);
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			
			if(j>i)
				pinakas[i][j]=0;
			else
				pinakas[i][j]=1+rand()%(8+1);
		}
	}
	
	printf("statikos pinkas\n");
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("\t%d",pinakas[i][j]);
		}
		printf("\n");
	}
	
	p=(int**)malloc(N*sizeof(int*));
	if(!p)
	{
		printf("den yparxei xwros sthn mnhmh");
		exit(0);
	}
	
	for(i=0; i<N; i++)
	{
		p[i]=(int*)malloc((i+1)*sizeof(int));
		if(!p[i])
		{
			printf("den upaxei xwros sthn mnhmh");
			exit(0);
		}
	}
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<=i; j++)
		{
			p[i][j]=1+rand()%(8+1);
		}
	}
	
	printf("\ndynmaikos pinakas\n");
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<=i; j++)
			printf("\t%d",p[i][j]);
		printf("\n");
	}
	
}
