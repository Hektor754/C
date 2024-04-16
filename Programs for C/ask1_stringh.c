#include <stdio.h>
#include <string.h>
#define N 10
#define SIZE 100

void swap(char **a,char **b);

main()
{
	int i,j,res;
	char *str[N];
	
	for(i=0; i<N; i++)
	{
		str[i]=(char *)malloc(SIZE*sizeof(char));
		if(str[i]==NULL)
		{ 
			printf("error locating memory");
			exit(0);
		}
		printf("dwse %d sumvoloseira: ",i);
		gets(str[i]);
	}
	for(i=0; i<N; i++)
	{
		for(j=N-1; j>=i+1; j--)
		{
			res=strcmp(str[j],str[j-1]);
			if(res<0)
				swap(&str[j], &str[j-1]);
		}
	}
	
	for(i=0; i<N; i++)
	{
		printf("%s\n",str[i]);
		
	}
	
	for(i=0; i<N; i++)
		free(str[i]);
	
}

void swap(char **a,char **b)
{
	char *temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
