#include <stdio.h>

int isprime(int x);

main()
{
	int a,b,i;
	printf("give start:");
	scanf("%d",&a);
	printf("give finish:");
	scanf("%d",&b);
	
	for(i=a; i<=b; i++)
	{
		if(isprime(i))
			printf("\nprime number=%d",i);
	}
}

int isprime(int x)
{
	int i;
	int check;
	check=1;
	for(i=2; i<x/2; i++);
	
		if(x%i==0)
			check=0;
		
	
	return check;
}
