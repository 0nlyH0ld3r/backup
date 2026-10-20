#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() 
{
	int v[3] = {0, 1, 2};
	intptr_t x = (intptr_t)&v[2] - (intptr_t)&v[0];
}

