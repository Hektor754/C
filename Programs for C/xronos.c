#include <stdio.h>

main()
{
	int sec;
	int min;
	int h;
	
	printf("dwste deyterolepta:");
	scanf("%d",&sec);
	
	h=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	
	printf("\nwres:%d",h);
	printf("\nlepta:%d",min);
	printf("\ndeyterolepta:%d",sec);
}
