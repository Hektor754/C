#include <stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

main()
{
	int x;
	
	printf("give a number:");
	scanf("%d",&x);

    if(is_even(x)==0)
   		printf("Einai Perritos");
   	else
   		printf("\nEinai Artios");	
   		
	if(is_square(x)==1)
		printf("\neinai tetragwno arithmou");
	
	if(is_cube(x)==1)
		printf("\neinai kuvos arithmou");
	
}

int is_even(int n)
{	
	if(n%2==0)
		return 1;
	else
		return 0;		
}

int is_odd(int n)
{	
	if(n%2==0)
		return 0;
	else
		return 1;	
}

int is_square(int n)
{
	int i;
	
	for(i=1; i<=n; i++)
	{
	
		if(i*i==n)
			return 1;
		else if(i*i>n)
			return 0;
	}
}

int is_cube(int n)
{
	int i;
	
	for(i=1; i<=n; i++)
	{
	
		if(i*i*i==n)
			return 1;
		else if(i*i*i>n)
			return 0;
	}
}
