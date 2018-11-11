#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}
