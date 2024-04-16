#include <stdio.h>
#define N 150
main()
{
	char str[N];
	int i;
	
	printf("dwse mia protash:");
	gets(str);
	
	i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		i++;
		
	}
	printf("nea symvoloseira: %s",str);
}
