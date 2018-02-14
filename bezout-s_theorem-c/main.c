#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include "bezout-s_theorem.h"

int main() {
	int a, b, c;
	Bezout *bezout = create_struct();

	printf("\nType the A - ");
	scanf("%d", &a); 
	printf("\nType the B - ");
	scanf("%d", &b);
	printf("\nType the C - ");
	scanf("%d", &c);

	read_bezout(bezout, a, b, c);
	calculate_bezout(bezout);
	results_bezout(bezout);

	system("pause");
}
