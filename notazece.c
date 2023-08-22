#include <stdio.h>

int main()
{
	unsigned a, b, rest, copie_a, copie_b, cmmdc;

	scanf("%u %u", &a, &b);

	copie_a = a;
	copie_b = b;

	while (b != 0) {
		rest = a % b;
		a = b;
		b = rest;
	}

	cmmdc = a;
	a = copie_a;
	b = copie_b;
	
	printf("%u", (a + b)/cmmdc - 2);
	
	return 0;
}
// scor: 100/100
