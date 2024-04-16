#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 80

struct stoixia {
	
	char *onoma;
	char *diefthinsi;
	char *nomos;
	char *arithmos;
	
};
typedef struct stoixia RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void init_record(RECORD *p);
void free_record(RECORD x);
void copy_record(RECORD *dest,RECORD src);


main()
{
	RECORD *p,x;
	int i,N,ch,m;
	
	printf("atoma gia pinaka eggrafhs?");
	scanf("%d",&N);
	
	p=malloc(sizeof(RECORD)*N);
	if(!p)
		exit(0);
	
	for(i=0; i<N; i++)
	{
		init_record(&p[i]);
		init_record(&x);
	}
	
	for(i=0; i<N; i++)
	{
		printf("%d-o atomo: \n",i+1);
		read_record(&p[i]);
	}
	
	for(i=0; i<N; i++)
	{
		print_record(p[i]);
	}
	
	printf("thelete na antigrapsete kapoia eggrafh jexwrista?\npathste 1 gia nai h 0 gia oxi");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("poia thelete na antigrapsete?");
		scanf("%d",&m);
		copy_record(&x,p[m]);
		printf("\n\nektupwsh stigmiotupou\n\n");
		print_record(x);
	}
	
	
	
	for(i=0; i<N; i++)
	{
		free_record(p[i]);
		free_record(x);
	}
	
	free(p);
}

void read_record(RECORD *p)
{
	printf("dwse onoma: ");
	gets(p->onoma);
	printf("dwse diefthinisi: ");
	gets(p->diefthinsi);
	printf("dwse nomo: ");
	gets(p->nomos);
	printf("dwse arithmo: ");
	gets(p->arithmos);
}

void print_record(RECORD x)
{
	printf("\n%s",x.onoma);
	printf("\n%s",x.diefthinsi);
	printf("\n%s",x.nomos);
	printf("\n%s\n",x.arithmos);
}

void init_record(RECORD *p)
{
	p->onoma=malloc(sizeof(char)*SIZE);
	if(!p->onoma)
		exit(0);
	p->arithmos=malloc(sizeof(char)*SIZE);
	if(!p->onoma)
		exit(0);
	p->nomos=malloc(sizeof(char)*SIZE);
	if(!p->onoma)
		exit(0);
	p->diefthinsi=malloc(sizeof(char)*SIZE);
	if(!p->onoma)
		exit(0);
}

void free_record(RECORD x)
{
	free(x.onoma);
	free(x.arithmos);
	free(x.diefthinsi);
	free(x.nomos);
}

void copy_record(RECORD *dest,RECORD src)
{
	strcpy(dest->arithmos,src.arithmos);
	strcpy(dest->diefthinsi,src.diefthinsi);
	strcpy(dest->nomos,src.nomos);
	strcpy(dest->onoma,src.onoma);
}
