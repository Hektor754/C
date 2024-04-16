#include <stdio.h>
#define N 10

main()
{
	char string[N];
	char check[2];
	int i;
	
	printf("dwses sumvoloseira: ");
	fgets(string,N,stdin);
	
	for(i=0; i<N; i++)
	{
		if(string[i]=='\0')
			break;
	}
	
	if(string[i-1]=='\n')
	{
		string[i-1]=='\0';
		printf("h sumvoloseira diavasthke: %s",string);
	}
	else
	{
		fgets(check,2,stdin);
		if(check[0]=='\n')
		{
			printf("h sumvoloseira diavasthke: %s",string);
		}
		else
		{
			printf("h sumvoloseira den diavasthke.To meros eina: %s",string);
			fflush(stdin);
		}
		
	}
}
