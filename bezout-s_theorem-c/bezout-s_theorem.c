/* Algoritmo para resolver a identidade de Bezout
Pedro Bernardi Alves */

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#define _SWAP_R(x, y, T) do { T SWAP = y; y = _MOD(x,y); x = SWAP; } while (0)
#define _SWAP_D(x, y, q, T) do { T SWAP = y; y = x - y * q; x = SWAP; } while (0)
#define _MOD(x,y) (x % y)
#define _TEST_D(c, mdc) ( (c % mdc == 0) ? (c /= mdc) : error())

#include <stdio.h>
#include <stdlib.h>
#include "bezout-s_theorem.h"

struct bezout {
	int x, y, q, _x[2], _y[2], r;
};

Bezout* create_struct() {
	Bezout* bezout = (Bezout*)malloc(sizeof(Bezout));
	return bezout;
}

void read_bezout(Bezout* bezout, int x, int y, int r) {
	bezout->x = x;
	bezout->y = y;
	bezout->r = r;
	bezout->_x[0] = 0;
	bezout->_y[0] = 1;
	bezout->_x[1] = 1;
	bezout->_y[1] = -1;
}

void calculate_bezout(Bezout* bezout) {

	while (_MOD(bezout->x, bezout->y) != 0) {

		_SWAP_R(bezout->x, bezout->y, int);
		bezout->q = (int)bezout->x / bezout->y;
		_SWAP_D(bezout->_x[0], bezout->_x[1], bezout->q, int);
		_SWAP_D(bezout->_y[0], bezout->_y[1], bezout->q, int);

	}

	_TEST_D(bezout->r, bezout->y);
	bezout->_x[0] *= bezout->r;
	bezout->_y[0] *= bezout->r;
}

void error() {
	printf("/nError - There are no solutions");
}

void results_bezout(Bezout* bezout) {
	printf("\nMDC - %d", bezout->y);
	printf("\nX0 - %d", bezout->_x[0]);
	printf("\nY0 - %d\n", bezout->_y[0]);
}
