#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ROW 9
#define COL 9
void main()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; col++)
			if (col > row)
				printf("");
			else
			printf("%5d", col * row);
			printf("\n");
	}
	system ("pause");
}		
