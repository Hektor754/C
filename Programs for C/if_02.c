#include <stdio.h>

main()
{
	int x;
	int y;
	
	printf("dwse akeraio x:");
	scanf("%d",&x);
	printf("\ndwse akeraio y:");
	scanf("%d",&y);
	
	if (x<y)
		printf("\n%d<%d",x,y);
	else
		if (x==y)
			printf("\n%d=%d",x,y);
		else
			printf("\n%d>%d",x,y);
}
