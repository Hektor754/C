#include <stdio.h>
#define N 3

void print();
void eisagogi_pinaka();

main()
{
	int choice;
	int number;
	float fNum;
	
	do{
		
		printf("dwse enan arithmo apo to ena ews to tessera:");
		scanf("%d",&choice);
	}while(choice<1 || choice>4);
	
	switch(choice)
	{
		
		case 1:
			printf("dwse ena akeraio arithmo:");
			scanf("%d",&number);
			printf("to tetragwno toy einai:%d",number*number);
			break;
		case 2:
			print();
			break;
		case 3:
			printf("dwse ena pragmatiko arithmo:");
			scanf("%f",&fNum);
			printf("to ena tetarto toy arithmoy poy edwses einai: %4.f",fNum/4);
			break;
		default:
			eisagogi_pinaka();
	}
}

void print()
{
	int i;
	
	for(i=0; i<N; i++)
		printf("\nkalimera!");
}

void eisagogi_pinaka()
{
	double pinaka[5];
	int i;
	double sum,mo;
	
	for(i=0; i<5; i++)
	{
		printf("dwse ton %d-o pragmaiko arithmo: ",i+1);
		scanf("%lf",&pinaka[i]);
		
	}
	
	sum=0.0;
	for(i=0; i<5; i++)
		sum+=pinaka[i];;
	mo=sum/5;
	
	printf("o mesos oros einai %.3f",mo);
	

}

