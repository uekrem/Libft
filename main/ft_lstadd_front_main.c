#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	new -> content = "utku";
	*lst = new;
}

int main()
{
	t_list	*root;
	t_list	*iter;
	t_list	*new;
	int		i;

	new = malloc(sizeof(t_list));
	root = malloc(sizeof(t_list));
	iter = root;
	iter -> content = "harun";
	i = 0;
	while (i < 5)
	{
		iter -> next = malloc(sizeof(t_list));
		iter = iter -> next;
		iter -> content = "harun";
		iter -> next = NULL;
		i++;
	}
	printf("%s\n", root -> content);
	ft_lstadd_front(&root, new);
	printf("%s\n", root -> content);
}
