#include <stdio.h>

main()
{
	int x;
	
	printf("plhktrologhse thn hlikia soy:");
	scanf("%d",&x);
	
	if (x<18)
		printf("eisai anhlikos");
	else if (x>=18 && x<=65)
		printf("eisai enhlikas");
	else 
		printf("eisai hlikiwmenos");
}
