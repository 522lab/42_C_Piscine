#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		a = nb + '0';
		write(1, &a, 1);
	}
}
/*
int main(void)
{
    ft_putnbr(-2000);
    return 0;
}
*/
