#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int div;
	int res;

	div = 1000000000;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (div > n)
		div /= 10;
	while (div > 0)
	{
		res = n / div;
		n %= div;
		div /= 10;
		res += '0';
		ft_putchar_fd(res, fd);
	}
	ft_putchar_fd('\n', fd);
}
