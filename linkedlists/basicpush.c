// read notes first
// Adding (push) an element in a linked list
#include "linkedlists.h"
#include <stdlib.h>
#include <stdio.h>

int		main()
{
	t_name	*ele1;
	t_name	*ele2;
	t_name	*toadd;//will be added between ele1 and ele2

	ele1 = (t_name*)malloc(sizeof(t_name*));
	ele2 = (t_name*)malloc(sizeof(t_name*));
	toadd = (t_name*)malloc(sizeof(t_name*));
// BEFORE ADDING NEW ELEMENT
	ele1 -> str = "HELLO";
	ele1 -> next = ele2;
	ele2 -> str = "!!!!";
	ele2 -> next = NULL;

	printf("ele1= %s\n", ele1->str);
	printf("ele2= %s\n\n", ele2->str);
// AFTER ADDING NEW ELEMENT
	toadd -> next = NULL;// GOOD PRACTICE TO INITIALLY POINT TO NULL BEFORE ADDING
	toadd -> str = "WORLD";
	toadd -> next = ele2;
	ele1 -> next = toadd;

	printf("ele1 = %s\n", ele1->str);
	printf("toadd = %s\n", toadd->str);
	printf("ele2 = %s\n", ele2->str);
	
	return (0);
}
