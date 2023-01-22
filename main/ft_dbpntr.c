typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list **lst)
{
	printf("lst:%u\n",lst);
	printf("*lst:%u\n",*lst);
	printf("**lst:%s\n",**lst);
}

int main()
{
	t_list	*root;
	t_list	*iter;
	int		i;

	i = 0;
	root = malloc(sizeof(t_list));
	printf("root:%u\n",root);
	printf("root pointer:%u\n",&root);
	root -> content = "harun";
	iter = root;
	while (i < 4)
	{
		iter -> next = malloc(sizeof(t_list));
		iter = iter -> next;
		iter -> content = "utku";
		iter -> next = 0;
		i++;
	}
	ft_lstsize(&root);
}
