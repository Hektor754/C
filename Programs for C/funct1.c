#include <stdio.h>

int get_integer(int start,int finish);

main()
{
	int res,a,b,n;

	a=get_integer(1,10);
	b=get_integer(1,10);
	n=get_integer(2,5);
	res=n*(a-b);
	printf("to apotelesma einai: %d",res);
	
}
int get_integer(int start,int finish)
{
	int x;
		do
	{
		printf("give number between %d and %d:",start,finish);
		scanf("%d",&x);	
	}while(x<start || x>finish);
	return x;
}
