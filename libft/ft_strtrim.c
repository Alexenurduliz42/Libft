

#include "libft.hss"

static int to_trim(const char *set, char c)
{
    int i;
    
    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && to_trim(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && to_trim(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
/* 	str[i] = 0;
	free (str); */
	return (str);
}