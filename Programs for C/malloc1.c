#include <stdio.h>
#include <stdlib.h>

main()
{
	int *p;
	int i,N;
	
	printf("dwse thn diastash toy pinaka:");
	scanf("%d",&N);
	
	p=malloc(sizeof(int)*N);
	if(!p)
	{
		printf("adynamia desmeushs mnhmhs:");
		exit(0);
	}
	
	for(i=0; i<N; i++)
	{
		p[i]=i*i*i;
		printf("\np[%d]=%d",i,p[i]);
	}
	
	free(p);
}

