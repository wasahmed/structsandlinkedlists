//read notes first

#include "linkedlists.h"
#include <stdlib.h>
#include <stdio.h>
int		main()
{
	t_name *ele1;
	t_name *ele2;

	ele1 = (t_name*)malloc(sizeof(t_name*)); //Good practice to allocate memory
	ele2 = (t_name*)malloc(sizeof(t_name*));

	ele1 -> str = "HELLO"; //HEAD of linked listremember how we accessed an attribute of a struct? now note the difference
	ele1 -> next = ele2;
	ele2 -> str = "WORLD";
	ele2 -> next = NULL;// element that points to null is the tail

	printf("ele1= %s\n", ele1->str);
	printf("ele2= %s\n", ele2->str);
}
