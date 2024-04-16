#include <stdio.h>

int euklid(int a,int b);

main()
{	
	int a,b,res;
	
	printf("give first number");
	scanf("%d",&a);
	printf("give second number");
	scanf("%d",&b);
	res=euklid(a,b);
	printf("o megistos koinos diaireths einai:%d",res);	
}

euklid(int a,int b)
{
			
	if(a==b)
	{
	return a;
	}	
	else if(a<b)
	{	
		return euklid(a,b-a);
	}
	else if(b<a)
	{

	return euklid(a-b,b);
	}
}
