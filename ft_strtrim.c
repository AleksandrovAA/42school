
#include "libft.h"

static int ch(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	int i;
	char *st;
	char *dest;
	int count;
    int end;

	if (!s)
		return (0);
	st = (char *)s;
	i = ft_strlen(s);
	if (!ch(s[0]) && !ch(s[i - 1]))
		return (st);
	end = i;
    count = 0;
	while (*s != '\0' && ch(*s++))
		i--;
    if (!i)
        return (ft_memalloc(1));
    while (--end && ch(st[end]))
		count++;
    count = i - count;
	if (!(dest = ft_strnew(count)))
		return (0);
	dest = ft_strncpy(dest, &st[ft_strlen(st) - i], count);
	return (dest);
}
