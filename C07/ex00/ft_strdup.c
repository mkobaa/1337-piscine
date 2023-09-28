#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0 ;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = (char *)malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(ptr, s);
	return (ptr);
}
