#include <stdio.h>
#include <string.h>
#define N 1000

int mystrlen(char *s);

main()
{
	char s[N];
	
	printf("dwse mia sumvoloseira:");
	gets(s);
	
	printf("to mhkos ths symvoloseiras einai: %d", mystrlen(s));
}

int mystrlen(char *s)
{
	int cnt;
	
	cnt=0;
	
	while(s[cnt]!='\0')
	{
		cnt++;
	}
	return cnt;
}
