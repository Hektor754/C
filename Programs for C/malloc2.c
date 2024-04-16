#include <stdio.h>
#include <stdlib.h>

main()
{
	double **p;
	int i,N,M;
	
	printf("dwse sthles to pinaka:");
	scanf("%d",&M);
	
	printf("dwse grammes toy pinaka:");
	scanf("%d",&N);
	
	p=malloc(sizeof(double*)*M);

	
	if(!p)
	{
		printf("den desmeythke xwrs gia ton pinaka");
		exit(0);
	}
	for(i=0; i<M; i++)
	{
		p[i]=malloc(sizeof(double)*N);
		if(!p[i])
		{
			printf("den uparxei xwros dieuthunshs");
			exit(0);
		}
	}	
	
	printf("ta bytes poy xreisathka gia ton pinaka einai: %d",M*N*sizeof(double)+M*sizeof(double*)+sizeof(double**));
	
	for(i=0; i<M; i++)
		free(p[i]);
	free(p);
}
