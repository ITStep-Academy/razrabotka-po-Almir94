#include <stdio.h>

int main(void)
{
	system("chcp 1251 > null");
	int a, b, z, square;
	scanf_s("%d", &a);
	b = (a - 5) / 10;
	z = b * (b + 1);
	square = z * 100 + 25;
	printf("%d", square);
	return 0;
}