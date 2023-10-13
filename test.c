#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	if (c >= '0' && c <= '9')
	{
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	
}

int main()
{
	ft_putchar();
}
