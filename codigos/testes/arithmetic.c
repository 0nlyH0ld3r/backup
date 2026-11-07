#include <stdlib.h>
#include <stdio.h>
int main()
{
	int *ptr = (int[]){1, 2, 3, 4, 5};
	printf("%d", *(ptr + 2));
}
