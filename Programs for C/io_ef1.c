#include <stdio.h>
#define M 5

void print();
void eisagogi_pinaka();

main()
{
	int x,y;
	float p;
	double mo,d,A[M];
	
	do
	{
		printf("dwse enan arithmo apo 1 ews 4:");
		scanf("%d",&x);
	}while(x<1 || x>4);
	
	if(x==1)
	{
		printf("\n\n------------------------------");
		printf("\ndwse akeraia metavlhth:");
		scanf("%d",&y);
		printf("\nto tetragwno ths einai:%d",y*y);
		printf("\n\n------------------------------");
	}
	else if(x==2)
	{
		printf("\n\n------------------------------");
		print();
		printf("\n\n------------------------------");
	}
	else if(x==3)
	{
		printf("\n\n------------------------------");
		printf("\ndwse mia pragmatikh metavlhth:");
		scanf("%f",&p);
		printf("\nto ena tetarto einai:%.4f",p/4);
		printf("\n\n------------------------------");
	}
	else
	{
		printf("\n\n------------------------------");
		eisagogi_pinaka();
		printf("\n\n------------------------------");
	}
}
void print()
{
	int i,N;
	
	printf("\ndwse akeraio:");
	scanf("%d",&N);
	
	for(i=0; i<N; i++)
	{
		printf("\nKalhmera");
	}
}

void eisagogi_pinaka()
{
	int i;
	double k=0.0;
	double pinakas[M],mo;
	
	for(i=0; i<M; i++)
	{
		printf("\ndwse stoixeio pinaka:");
		scanf("%lf",&pinakas[i]);
		k+=pinakas[i];
	}
	mo=k/5;
	printf("o mesos oros einai:%.3f",mo);
}

