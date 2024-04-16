#include <stdio.h>
#include <conio.h>

main()
{
	char c;
	
	c=getch();
	
	while(c!='.')
	{
		if(c>='a' && c<='z')
			printf("%c",c-32);
		else
			printf("%c",c);
			
		c=getch();
	}
}
