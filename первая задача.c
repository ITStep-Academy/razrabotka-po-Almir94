#include <stdio.h>
int main()
{
	int i;
	scanf_s("%d", &i);
	i = 2147483647;
	i = i + 1;
	printf("%d", i);
	return 0;
}