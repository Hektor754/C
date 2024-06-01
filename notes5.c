# include <stdio.h>
# include <string.h>
typedef struct
{
	char name[80];
	char lastname[80];
	int personid;
}Person;


void clearBuffer()
{
	char ch;
	while((ch=getchar())!='\n');
}

void readPerson(Person *p)
{
	printf("Enter name?\n");
	gets(p->name);
	printf("Enter lastname?\n");
	gets(p->lastname);
	printf("Enter id?\n");
	scanf("%d",&p->personid);
	clearBuffer();
}

void showPerson(Person p)
{
	printf("Details: %s,%s,%4d\n",
		p.name,p.lastname,p.personid);
}

int main()
{
	Person people[5];
	int i,j;
	Person pt;
	for(i=0;i<5;i++) readPerson(&people[i]);
	for(i=0;i<5;i++) showPerson(people[i]);
	/** sort **/
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(strcmp(people[j+1].lastname,people[j].lastname)>0)
			{
				pt=people[j];
				people[j]=people[j+1];
				people[j+1]=pt;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		showPerson(people[i]);
	}
	return 0;
}
