#include <stdio.h>
#include <conio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int x;

	for (x = 0; x < 4; x++)
	{
		printf("Element %d: %d\n", x + 1, array[x]);
	}

	_getch();
	return(0);
}