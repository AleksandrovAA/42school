
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *current;
    while ((current = *alst) != NULL)
    {
        (*alst) = (*alst)->next;
        ft_lstdelone(&current, del);
    }
    free(*alst);
	*alst = NULL;
}
