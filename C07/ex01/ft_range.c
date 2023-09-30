#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	i = 0;
	size = max - min;
	ptr = (int *)malloc (sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
	}
	return (ptr);
}
