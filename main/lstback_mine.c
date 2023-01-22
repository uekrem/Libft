#include <stdlib.h>
#include <stdio.h>
typedef struct s_list{
	void		*content;
	struct s_list	*next;
}	t_list;

int main()
{
	t_list *root;
	t_list *iter;
	int	i;

	i = 0;
	root = malloc(sizeof(t_list));
	root -> content = "harun";
	iter = root;
	while(i < 4)
	{
		iter -> next = malloc(sizeof(t_list));
		iter = iter -> next;
		iter -> content = "utku";
		iter -> next = NULL;
		i++;
	}
	iter = root;
	while(iter -> next != NULL)
		iter = iter -> next;
	iter -> content = "son";
	iter = root;
	while(iter != NULL)
	{
		printf("%s ",iter -> content);
		iter = iter -> next;
	}
}
