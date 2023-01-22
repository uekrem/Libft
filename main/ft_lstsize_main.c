#include <stdlib.h>
#include <stdio.h>
typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

int main()
{
	int	i;
	t_list	*root;
	t_list	*iter;

	i = 0;
	root = malloc(sizeof(t_list));
	iter = root;
	iter -> content = "harun";
	while (i < 2)
	{
		iter -> next = malloc(sizeof(t_list));
		iter = iter -> next;
		iter -> content = "harun";
		iter -> next = NULL;
		i++;
	}
	printf("%d",ft_lstsize(root));
}
