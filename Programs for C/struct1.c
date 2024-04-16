#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 100

struct epafi {
	char name[STRING_SIZE];
	char phone[STRING_SIZE];
};

main()
{
	struct epafi *pinakas;
	int i,N;
	
	//eisagwgh thn diastash toy pinaka apton xrhsth
	printf("dwse plithos epafwn: ");
	scanf("%d",&N);
	
	//dunamikh desmeush mnhmhs
	pinakas=malloc(sizeof(struct epafi)*N);
	
	if(!pinakas)
	{
		printf("adunamia desmeushs mnhmhs");
		exit(0);
	}
	
	//diavasma epafwn
	fflush(stdin);
	for(i=0; i<N; i++)
	{
		printf("dwse onoma toy %d-ou atomou",i+1);
		gets(pinakas[i].name);
		printf("dwse thlefwno %d-ou atomou",i+1);
		gets(pinakas[i].phone);
	}
	
	//ektupwsh epafwn
	printf("\n\nEPAFES\n============");
	for(i=0; i<N; i++)
	{
		printf("\n%d) %s (%s) ",i+1,
			pinakas[i].name,
			pinakas[i].phone);
	}
	//apodesmeush mnhmhs
	free(pinakas);
}
