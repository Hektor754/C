#include <stdio.h>
#define SIZE 1000

int *mystrcpy(char *dest,char *src);

main()
{
	char s1[SIZE],s2[SIZE],s3[SIZE];
	int x;
	
	printf("dwse prwth protash: ");
	gets(s1);
	printf("dwse deyterh protash: ");
	gets(s2);
	printf("dialekste poia aptis dyo protaseis tha antigrapseis:\n1 gia thn prwth protash\n2 gia thn deyterh protash");
	scanf("%d",&x);
	if(x==1)
	{
		printf("%s",s1[SIZE]);
		printf("%s",s2[SIZE]);
		printf("%s",mystrcpy(s3,s1));
	}
	else
	{
		printf("%s",s1[SIZE]);
		printf("%s",s2[SIZE]);
		printf("%s",mystrcpy(s3,s2));
	}
}

int *mystrcpy(char *dest,char *src)
{
	int cnt;
	
	while(src[cnt]!='\0')
	{
		dest[cnt]=src[cnt];
		cnt++;
	}
	dest[cnt]='\0';
	return dest;
}
