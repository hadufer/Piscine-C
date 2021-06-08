#include <stdio.h>

char	*ft_strncpy(char *str, char *str2, int a);

int main()
{
	char a[] = "lila";
	char b[] = "bobrazophski";
	printf("%s, %s\n",a ,b);
	ft_strncpy(a, b, 10);
	printf("%s, %s\n", a, b);
}
