#include <stdio.h>
#define N 50

main()
{
	char string[N];
	char c;
	int i;
	
	printf("dwse sumvoloseira: ");
	c=getchar();
	i=0;
	while(c!='\n')
	{
		string[i]=c;
		c=getchar();
		i++;
	}
	string[i]='\0';
	
	printf("h dumvoloseira einai: ");
	i=0;
	while(string[i]!='\0')
	{
		putchar(string[i]);
		i++;
	}
}
