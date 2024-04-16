#include <stdio.h>
#include <math.h>

struct point {
	float x;
	float y;
};

void read_point(struct point *p);
float euklideia_apostash(struct point A,struct point B);

main()
{
	struct point A,B;
	printf("dwse 1o shmeio: \n");
	read_point(&A);
	printf("dwse 2o shmeio \n");
	read_point(&B);
	
	printf("h eukleidia apostash einai:%3.f",euklideia_apostash(A,B));
}

void read_point(struct point *p)
{
	printf("dwse x suntetagmenh:");
	scanf("%f",&(p->x));
	
	printf("dwse y suntetagmenh:");
	scanf("%f",&(p->y));
}

float euklideia_apostash(struct point A,struct point B)
{
	return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
