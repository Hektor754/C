#include <stdio.h>

main()
{
	double pinakas[100];
	double *ptr;
	int i;
	
	ptr=pinakas;
	ptr+=2;

	for(i=0; i<100; i++)
	printf("\n%d",&pinakas[i]);
}
