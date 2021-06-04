#include "ft_strcpy.c"

int main()
{
	char a[] = "test";
	char b[] = "12345678bye";
	char d[] = "test";
	char e[] = "123456789no";

	printf("me = %s %s\n", a, b);
	printf("strcpy = %s %s\n", d, e);
	printf("me = %s %s , %s\n", a, b, ft_strcpy(a, b));
	printf("strcpy = %s %s , %s\n", d, e, strcpy(d, e));

}
