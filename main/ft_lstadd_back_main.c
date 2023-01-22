#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (!*lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	str = *lst;
	while (str -> next != NULL)
		str = str -> next;
	str -> next = new;
	str = str -> next;
	str -> next = NULL;
	str -> content = "utku";
}
int	main()
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
	ft_lstadd_back(&root, new);
	while (root -> next != NULL)
		root = root -> next;
	printf("%s", root -> content);
}
