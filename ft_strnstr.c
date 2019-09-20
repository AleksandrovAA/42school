#include "libft.h"

char	*ft_strnstr(const char *huge, const char *s2, size_t n)
{
	unsigned char   *h;
	unsigned char   *s;
	int             i;
	int             j;
	int             k;

	i = -1;
	j = 0;
	k = 0;
	h = (unsigned char *)huge;
	s = (unsigned char *)s2;
	if (!*s)
		return ((char *)h);
	while (h[++i])
	{
		while  (h[i] == s[j] && s[j] != '\0' && i < (int)n)
		{
			k++;
			i++;
			j++;
		}
		if ((int)ft_strlen((const char *)s) == k)
			return ((char *)&h[i - k]);
		else  if (k > 0)
        	{
            j = 0;
			i -= k;
			k = 0;
        	}
	}
	return (0);
}
