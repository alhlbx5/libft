#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_atoi(char *c)
{
	int i = 0;
	while (c[i])
	{
		int nmb = c[i] - 48;
		ft_putchar(nmb + '0');
		i++;
	}
	
}

int main()
{
	ft_atoi("h8888-+888");
	ft_putchar('\n');
}
