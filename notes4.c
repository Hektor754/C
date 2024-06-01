# include <stdio.h>
# include <string.h>
typedef struct
{
	char name[80];
	char lastname[80];
	int personid;
}Person;


void readPerson(Person *p)
{
	printf("Enter name?\n");
	gets(p->name);
	printf("Enter lastname?\n");
	gets(p->lastname);
	printf("Enter id?\n");
	scanf("%d",&p->personid);
}

void showPerson(Person p)
{
	printf("Details: %s,%s,%4d\n",
		p.name,p.lastname,p.personid);
}

int main()
{
	Person x;
	readPerson(&x);
	showPerson(x);
	return 0;
}
