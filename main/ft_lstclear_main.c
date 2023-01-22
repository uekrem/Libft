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
    str = '\0';
}

void    ft_lstclear(t_list *lst, void (*del)(void *))
{
    t_list    *iter;

    if (!lst)
        return ;
    iter = lst;
    while (iter -> next != NULL)
    {
        del(iter -> content);
        iter = lst -> next;
        free(lst);
        lst = iter;
    }
    del(iter -> content);
    free(iter);
}

int main()
{
    t_list    *root;
    t_list    *iter;
    int        i;

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
    ft_lstclear(root, del);
}
