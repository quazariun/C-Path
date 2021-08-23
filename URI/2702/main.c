#include <stdio.h>

int main()
{
	int option_1, option_2, option_3;
	int orders_1, orders_2, orders_3;
	int result = 0;

	scanf("%d %d %d", &option_1, &option_2, &option_3);
	scanf("%d %d %d", &orders_1, &orders_2, &orders_3);

	if (option_1 - orders_1 < 0)
	{
		result += orders_1 - option_1;
	}
	if (option_2 - orders_2 < 0)
	{
		result += orders_2 - option_2;
	}
	if (option_3 - orders_3 < 0)
	{
		result += orders_3 - option_3;
	}

	printf("%d\n", result);

	return 0;
}
