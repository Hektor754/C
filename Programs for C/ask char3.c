#include <stdio.h>
#define N 150
main()
{
	char str[N];
	char str2[N];
	int c,k;
	
	printf("dwse prwth symvoloseira:");
	gets(str);
	printf("dwse deyterh sumvoloseira:");
	gets(str2);
	
	c=*str;
	k=*str2;
	if(c>k)
		printf("isxuei:%s>%s",str,str2);
	else
		printf("isxuei:%s<%s",str,str2);
	
}
