#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(int c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

int	ft_atoi(char *c)
{
	int i = 0;
	int nmb;
	while (c[i])
	{
		nmb = c[i] - 48;
		i++;
	}
	return (nmb + '0');
}

int main()
{
	int c = ft_atoi("6");
	ft_putchar(c);
}
