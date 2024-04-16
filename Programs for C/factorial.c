#include <stdio.h>

int factorial(int n);

main()
{
	int x;
	int res;
	
	printf("dwste ton fusiko: ");
	scanf("%d",&x);
	
	res=factorial(x);
	printf("\n%d!=%d",x,res);
}

int factorial(int n)
{
	int y;
	
	if(n==1)
		return 1;
	else
	{
		y=factorial(n-1);
		return n*y;
		
	}
}
