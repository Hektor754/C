#include <stdio.h>

void swap(int *ptrA,int *ptrB);

main()
{
	int a=5,b=10;
	printf("\nmain:a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nmain:a=%d,b=%d",a,b);
	
}

void swap(int *ptrA,int *ptrB)
{
	int k;
	k=*ptrA;
	*ptrA=*ptrB;
	*ptrB=k;
	printf("\nswap:a=%d,b=%d",*ptrA,*ptrB);
}
