#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//SINGLY LINKED LISTS
//
//Why not use array?
//[1] it is hard to add a new element into array except if its being
//added to the end of the array
//[2] inflexibility issue - what happens if we need a larger array 
//than we initially thought
//
//NODE REPRESENTATION : [content | pointer to another node]
//
typedef		struct	slist
{
	void	*content;
	size_t	content_size;	
	struct	slist	*next; // self referential structure - pointer to another structure of the same type.
}					t_list;

// creating a new linked list
// STEPS
// [1] dynamically allocate memory for a new node. (malloc)
// [2] check that we didnt run out of memory
// [3] Initialize the nodes content field
// [4] Initialize the nodes next field (pointer)
// [5] Return a pointer to the newly created node
t_list		*ft_lstnew(void const *content, size_t csize)
{
	t_list *new;									

	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;	
	}
	else
	{
		if(!(new->content = malloc(csize)))    //when there isnt sufficient memory
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, csize); //dest/source/n
		new->content_size = csize;
	}
	new->next = NULL;
	return (new);
}

void	ft_lstadd(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}

int		main(void)
{
	int i;

	t_list *list;
	t_list *link;

	list = ft_lstnew("Hello World", 0);
	for (i = 1; i < 16; i++)
	{
		link = ft_lstnew("Hello World", i);
		ft_lstadd(&list, link);
	}
	while (list)
	{
		printf("%s-%d\n", list->content, i);
		list = list->next;
		i--;
	}
	return (0);
}
