#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 && !s2)
        return (NULL);

    char *s3;
    size_t len_s1;
    size_t len_s2;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);

    s3 = malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (!s3)
        return (NULL);

    ft_strlcpy(s3, s1, len_s1 + 1);
    ft_strlcat(s3, s2, len_s1 + len_s2 + 1);

    return (s3);
}
