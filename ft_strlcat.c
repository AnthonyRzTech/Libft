#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	if (!dst || !src)
		return 0;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);

	if (size == 0 || dst_size >= size)
		return (src_size + size);

	i = 0;
	while (src[i] && (i + dst_size + 1 < size))
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
