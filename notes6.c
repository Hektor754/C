# include <stdio.h>
# include <string.h>
# define NPERSONS 5
typedef struct
{
	char name[80];
	char lastname[80];
	int  age;
}Person;

void clearBuffer()
{
	while(getchar()!='\n');
}

Person readPerson()
{
	Person p;
	printf("Doste onoma ?\n");
	gets(p.name);
	printf("Doste epitheto ?\n");
	gets(p.lastname);
	printf("Doste ilikia?\n");
	scanf("%d",&p.age);
	clearBuffer();
	return p;
}


void exportPerson(char *filename,Person p)
{
	FILE *fp;
	fp=fopen(filename,"a");
	fprintf(fp,"%s,%s,%d\n",p.name,p.lastname,p.age);
	fclose(fp);
}

int main()
{
	Person people[NPERSONS];
	int i;
	for(i=0;i<NPERSONS;i++)
	{
		people[i]=readPerson();
		exportPerson("persons.txt",people[i]);
	}
	return 0;
}
