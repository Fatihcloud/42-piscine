int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb < 0 || nb > 12)
		return (0);
	a = 1;
	while (nb > 0)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
