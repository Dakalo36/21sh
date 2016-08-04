

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	*(++dst) = '\0';
	return (dst);
}
