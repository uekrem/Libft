#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}    t_list;

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *str;

    if (!lst || !new)
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
}
t_list    *ft_lstnew(void    *content)
{
    t_list    *root;

    root = malloc(sizeof(t_list));
    if (!root)
        return (NULL);
    root -> content = content;
    root -> next = NULL;
    return (root);
}
void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list    *iter;
    t_list    *tmp;

    if (!lst)
        return ;
    iter = *lst;
    tmp = *lst;
    while (iter -> next != NULL)
    {
        del(iter -> content);
        iter = tmp -> next;
        free(tmp);
        tmp = iter;
    }
    del(iter -> content);
    free(iter);
}
t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new_block;
    t_list    *new_list;

    if (!lst)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        new_block = ft_lstnew(f(lst -> content));
        if (new_block == NULL)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_block);
        lst = lst -> next;
    }
    return (new_list);
}

void    *f(void *str)
{
    return (str);
}

void    del(void *str)
{

}

int main()
{
    t_list    *root;
    t_list    *iter;
    t_list    *tmp;
    int        i;

    root = malloc(sizeof(t_list));
    iter = root;
    iter -> content = "utku";
    i = 0;
    while (i < 2)
    {
        iter -> next = malloc(sizeof(t_list));
        iter = iter -> next;
        iter -> content = "harun";
        iter -> next = NULL;
        i++;
    }
    tmp = ft_lstmap(root, f, del);
    while (tmp != NULL)
    {
      printf("%s\n", tmp -> content);
      tmp = tmp -> next;
    }
    return (0);
}
