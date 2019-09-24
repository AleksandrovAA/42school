
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int	i;

	i = 0;
	if (!len || !s || !(tmp = ft_strnew(len)))
		return (0);
	while ((int)len)
	{
		tmp[i] = s[i + start];
		i++;
        len--;
	}
	return (tmp);
}
