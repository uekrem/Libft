#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstiter(t_list *lst, void	(*f)(void *))
{
	t_list	*iter;

	iter = lst;
	while (iter != NULL)
	{
		f(iter -> content);
		iter = iter -> next;
	}
}

void	ft_rec(void	*str)
{
	char	*cstr;

	cstr = (char *) str;
	printf("%s ",cstr);
}

int main()
{
	t_list	*root;
	t_list	*iter;
	int		i;

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
	ft_lstiter(root, ft_rec);
}
