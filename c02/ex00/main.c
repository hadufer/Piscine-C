#include "ft_strcpy.c"

int main()
{
	char a[] = "test";
	char b[] = "";

	printf("%s %s\n", a, b);
	ft_strcpy(a, b);
	printf("%s %s\n", a, b);

}
