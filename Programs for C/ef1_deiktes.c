#include <stdio.h>
#include <math.h>

int rizes(float a,float b,float c,float *x1,float *x2);

main()
{
	float a,b,c,r1,r2;
	int pl;
	printf("dwse suntelesth toy x^2:");
	scanf("%f",&a);
	printf("dwse ton suntelesth toy x:");
	scanf("%f",&b);
	printf("dwse akeraio: ");
	scanf("%f",&c);
	
	pl=rizes(a,b,c,&r1,&r2);
	
	if(pl==0)
		printf("den exei rizes");
	else if(pl==1)
		printf("exei thn riza %f",r1);
	else
		printf("exei riza thn %f kai thn %f",r1,r2);
	
}

int rizes(float a,float b,float c,float *x1,float *x2)
{
	float D;
	D=b*b-4*a*c;
	
	if(D<0)
	return 0;
	else if(D==0)
	{
		*x1=-b/(2*a);
		return 1;
	}
	else
	{
		*x1=(-b+sqrt(D))/(2*a);	
		*x2=(-b-sqrt(D))/(2*a);
		return 2;
	}
	
	
	
	
}
