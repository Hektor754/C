#include <stdio.h>
#include <stdlib.h>
#define OPT 30
main()
{
	float day;
	int week,smoke,x,extra,money,exoda,coffee,y,p,f,sum;
	char m;
	p=f=1/2;
	exoda=16;
	char response[5];
	coffee=2;
	
	do
	{
		printf("money:");
		scanf("%d",&money);
	}while(money%5!=0);
	
	if(money==80)
	{
		printf("how many smokes in two weeks?:");
		scanf("%d",&smoke);
			
		if(smoke==2)
		{
			printf("how many papers in two weeks?:");
			scanf("%d",&p);
			printf("how many filters in two weeks?:");
			scanf("%d",&f);
			y=(p+f)/2;
			sum=smoke*10+y;
			money=money-sum;
			money=money-exoda;
			
			printf("will you have extra expenses this 2 weeks?:");
			scanf("%s",&response);
			
			if(!strcmp(response, "yes"))
			{
				printf("how much?:");
				scanf("%d",&extra);
				money=money-extra;
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}
			else if(!strcmp(response, "no"))
			{
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}	
				
			
			
		}
		else if(smoke==3)
		{
			printf("how many papers in two weeks?:");
			scanf("%d",&p);
			printf("how many filters in two weeks?:");
			scanf("%d",&f);
			y=(p+f)/2;
			sum=smoke*10+y;
			money=money-sum;
			money=money-exoda;
			
			printf("will you have extra expenses this 2 weeks?:");
			scanf("%s",&response);
			
			if(!strcmp(response, "yes"))
			{
				printf("how much?:");
				scanf("%d",&extra);
				money=money-extra;
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}
			else if(!strcmp(response, "no"))
			{
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}	
			
		}
		
	}
	else if(money>80)
	{
		printf("how many smokes in two weeks?:");
		scanf("%d",&smoke);
		if(smoke==2)
		{
			printf("how many papers in two weeks?:");
			scanf("%d",&p);
			printf("how many filters in two weeks?:");
			scanf("%d",&f);
			y=(p+f)/2;
			sum=smoke*10+y;
			money=money-sum;
			money=money-exoda;
			
			printf("will you have extra expenses this 2 weeks?:");
			scanf("%s",&response);
			
			if(!strcmp(response, "yes"))
			{
				printf("how much?:");
				scanf("%d",&extra);
				money=money-extra;
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}
			else if(!strcmp(response, "no"))
			{
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}	
				
			
			
		}
		else if(smoke==3)
		{
			printf("how many papers in two weeks?:");
			scanf("%d",&p);
			printf("how many filters in two weeks?:");
			scanf("%d",&f);
			y=(p+f)/2;
			sum=smoke*10+y;
			money=money-sum;
			money=money-exoda;
			
			printf("will you have extra expenses this 2 weeks?:");
			scanf("%s",&response);
			
			if(!strcmp(response, "yes"))
			{
				printf("how much?:");
				scanf("%d",&extra);
				money=money-extra;
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}
			else if(!strcmp(response, "no"))
			{
				x=(money-OPT)/coffee;
				printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
				printf("\nsoy apomenoyn %d",money-x);
				printf("\ntha soy apomenoyn xwris kafedes %d",money);
				day=(float)money/15;
				printf("\nthn hmera mporeis na xalas %f",(float)day);
				scanf("%s",&m);
			}	
			
		}
	}
	else if(money<80)
	{
		printf("how many smokes in two weeks?:");
		scanf("%d",&smoke);
		if(smoke==2)
		{
			printf("how many papers in two weeks?:");
			scanf("%d",&p);
			printf("how many filters in two weeks?:");
			scanf("%d",&f);
			y=(p+f)/2;
			sum=smoke*10+y;
			money=money-sum;
			money=money-exoda;
			printf("you cant have extra expenses");
			x=(money-OPT)/coffee;
			printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
			printf("\nsoy apomenoyn %d",money-x);
			printf("\ntha soy apomenoyn xwris kafedes %d",money);
			day=(float)money/15;
			printf("\nthn hmera mporeis na xalas %f",(float)day);
			scanf("%s",&m);
										
		}
		else if(smoke==3)
		{
			printf("how many papers in two weeks?:");
			scanf("%d",&p);
			printf("how many filters in two weeks?:");
			scanf("%d",&f);
			y=(p+f)/2;
			sum=smoke*10+y;
			money=money-sum;
			money=money-exoda;
			printf("you cant have extra expenses");
			x=(money-OPT)/coffee;
			printf("mporeis na pareis %d kafedes mexri ta %d euro",x,OPT);
			printf("\nsoy apomenoyn %d",money-x);
			printf("\ntha soy apomenoyn xwris kafedes %d",money);
			day=(float)money/15;
			printf("\nthn hmera mporeis na xalas %f",(float)day);
			scanf("%s",&m);
		}
		
	}
}
