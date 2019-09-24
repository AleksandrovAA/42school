
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
        return (0);
    if (content == NULL)
    {
        element->content = NULL;
        element->content_size = 0;
    }
    else
    {
        element->content_size = content_size;
        if (!(element->content = malloc(content_size)))
        {
            free(element);
            return (NULL);
        }
        ft_memcpy(element->content, content, content_size);
    }
    element->next = NULL;
    return (element);
}
