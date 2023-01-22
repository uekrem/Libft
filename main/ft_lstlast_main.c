#include <stdlib.h>
#include <stdio.h>
typedef struct s_list{
	void	*content;
	struct s_list *next;
}	t_list;

t_list	*ft_lstlast(t_list *lst)
{
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

int main()
{
	t_list	*root;
	t_list	*iter;
	t_list	*tmp;
	int	i;

	i = 0;
	root = malloc(sizeof(t_list));
	root -> content = "sil";
	iter = root;
	while (i < 3)
	{
		iter -> next = malloc(sizeof(t_list));
		iter = iter -> next;
		if (i != 2)
			iter -> content = "ekle";
		else
			iter -> content = "mala bak";
		iter -> next = NULL;
		i++;
		
	}
	tmp = ft_lstlast(root);
	printf("%s",tmp -> content);
}
