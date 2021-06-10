#include <unistd.h>
#include <limits.h>
void	ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(INT_MIN, "0123456789");
	//write(1, "\n", 1);
}
