#include <stdio.h>

int main()
{
	unsigned a, b, rest, copie_a, copie_b, cmmdc, cmmmc;

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
	if (cmmdc == 1) printf("%u", a + b - 2);
	else {
		cmmmc = a > b ? a/cmmdc * b : b/cmmdc *a;

		printf("%u", cmmmc/a + cmmmc/b - 2);
	}
	
	return 0;
}

// scor: 50/100
