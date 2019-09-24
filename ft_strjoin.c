
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *all;
    
    if (!s1 || !s2 || !(all = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
    if (!(all = ft_strcpy(all, s1)) || !(all = ft_strcat(all, s2)))
        return (0);
    return (all);
}
