#include <stdio.h>
#include <stdlib.h>

main()
{
	int hidden,x;
	
	srand(time(NULL));
	
	hidden=1+rand()%100;
	
	
	
	do
	{	
		printf("\ngive a number:");
		scanf("%d",&x);
		if(x==hidden)
			printf("\ncongratulations you found the number\n");
		else if(x<hidden)
			printf("\nyour number is too low\n");
		else 
			printf("\nyour number is too high\n");
	}while(x!=hidden);
}
