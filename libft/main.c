#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n);

int	main(void)
{
	int	n = -1234;
	char *s = ft_itoa(n);

	printf("%s\n", s);
	return (0);
}