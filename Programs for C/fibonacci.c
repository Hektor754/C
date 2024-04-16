#include <stdio.h>

int fibonacci(int n);

main()
{
	int x;
	do
	{
		printf("dwse akeraio sto diasthm a [1,apeiro):");
		scanf("%d",&x);
	}while(x<1);
	printf("o arithmos fibonacci toy arithmoy pou dwsate einai:%d",fibonacci(x));

}

int fibonacci(int n)
{
	int res;
	

	if(n>2)
	return fibonacci(n-1)+fibonacci(n-2);
	else
	 return 1;

	
}
