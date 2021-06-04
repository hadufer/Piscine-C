#include "ft_strncpy.c"

int main()
{
	char a[] = "lila";
	char b[] = "bobrazophski";
	printf("%s, %s\n",a ,b);
	ft_strncpy(a, b, 10);
	printf("%s, %s\n", a, b);
}
