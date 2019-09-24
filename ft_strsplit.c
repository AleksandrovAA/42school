#include <stdlib.h>
#include "libft.h"

static int        counter_words(char const *str, char c)
{
    int        i;
    int        count_w;
    char       prev;

    i = 0;
    count_w = 0;
    while (str[i])
    {
        if (str[i] != c && (i == 0 || (prev && prev == c)))
            count_w++;
        prev = str[i++];
    }
    return (count_w);
}

/*static void    del(void *as)
{
    if (as)
    {
        free(as);
        // *as = NULL;
    }
}*/

static void      split(char **stroka, char *s, char c)
{
    char prev;
    int i;
    int start;
    int n;
    
    n = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || (prev && prev == c)))
            start = i;
        else if (s[i] == c && i != 0 && prev != c)
            stroka[n++] = ft_strsub(s, start, i - start);
        prev = s[i++];
    }
    if (prev != c)
        stroka[n++] = ft_strsub(s, start, i - start);
    stroka[n] = 0;
}

char	**ft_strsplit(char const *s, char c)
{
    char       **stroki;
    
    if (!s)
        return (0);
    if (!(stroki = (char **)ft_memalloc(sizeof(char *) * (counter_words(s, c) + 1))))
        return (0);
    split(stroki, (char *)s, c);
    return (stroki);
}
