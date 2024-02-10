#include <stdio.h>

int	main(void)
{
	auto int i = 40;
	auto int condition = i > 20 && i < 100;
	printf("%i\n", condition);
	printf("%i\n", !condition);
}
