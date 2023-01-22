#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

void    del(void *str)
{
    //str = '\0';
}

t_list    *ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list *tmp;
    
    if (!lst)
        return ;
    del(lst -> content);
    tmp = lst -> next;
    free(lst);
    return (tmp);
}

int main()
{
    t_list    *root;
    t_list    *iter;
    int        i;

    root = malloc(sizeof(t_list));
    iter = root;
    iter -> content = "utku";
    i = 0;
    while (i < 5)
    {
        iter -> next = malloc(sizeof(t_list));
        iter = iter -> next;
        iter -> content = "harun";
        iter -> next = NULL;
        i++;
    }
    printf("%s",(ft_lstdelone(root, del) -> content));
    
}
