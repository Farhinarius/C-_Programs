// lab_1;
// NOD

 // только при создании проекта с заголовочными файлами (!)
#include <iostream> 
#include <stdio.h>
int nod(int x, int y)
{
	while (x != y)
		if (x > y) x = x - y;
		else y = y - x;
	return y;
}
void main()
{
	int a, b;
	puts(" Input two natural numbers: ");
	scanf_s("%d %d", &a, &b);
	printf("NOD %d and %d = %d.\n", a, b, nod(a, b));
}