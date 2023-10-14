#include <unistd.h>

void	ft_putchar(int c)
{
	if (c >= '0' && c <= '9')
	{
		write(1, &c, 1);
	}
	
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	
}

int main()
{
	ft_putchar('');//why cant ignore it and the result here is 0
}
////////////////////////////////
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(int *c)//why its not working even the int is bigger than char
{
	int i;
	i = 0;
	int nmb;
	while (c[i])
	{
		nmb = c[i] - 48;
		ft_putchar(nmb);
		i++;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_atoi("99");
}
