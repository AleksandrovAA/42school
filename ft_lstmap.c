#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *current;
    t_list *all_list;
    
    if (!lst)
        return (NULL);
    all_list = f(lst);
    current = all_list;
    while (lst->next)
    {
        lst = lst->next;
        if (!(current->next = f(lst)))
        {
            free(current->next);
            return (NULL);
        }
        current = current->next;
    }
    return (all_list);
}
