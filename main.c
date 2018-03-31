#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include "bezout-s_theorem.h"

int main() {
	int a, b, c, op;

	while (1) {
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

		printf("\n\tNew dates? - \n\t[1-YES] | [2-NO]\n\t\t");
		scanf("%d", &op);

		op == 1 ? system("cls") : exit(0);
	}

	system("pause");
}
