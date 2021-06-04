#include "ft_sort_int_tab.c"
#include <limits.h>

int main()
{
	int tab[] = {5, 2, 3, 8, INT_MAX, 1, 2, 12, -1, INT_MIN};
	int size = 9;
	ft_sort_int_tab(tab, size);
	int i = 0;
	while (i < size)
		printf("%d ", tab[i++]);
	printf("\n");
}
