#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	f;

	f = *a;
	*a = *b;
	*b = f;
}
