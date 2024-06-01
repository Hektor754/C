void addPerson(Person ** head, Person x) 
{
    Person  *new_node;
    new_node = (Person *)malloc(sizeof(Person));
    strcpy(new_node->name,x.name);
    strcpy(new_node->lastname,x.lastname);
	new_node->age=x.age;
    new_node->next = *head;
    *head = new_node;
}



void printList(Person *t)
{
	while(t!=NULL)
	{
		printf("element : ");
		printPerson(*t);
		t=t->next;
	}
}

int	removeElement(Person **head)
{
	int retval = -1;
    	Person *next_node = NULL;
    	if (*head == NULL) 
	{
        	return 0;
    	}
    	next_node = (*head)->next;
    	free(*head);
    	*head = next_node;
    	return 1;
}
