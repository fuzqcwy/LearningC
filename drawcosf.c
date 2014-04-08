/*
 * drawcosf.c
 *
 *  Created on: 2014Äê3ÔÂ25ÈÕ
 *      Author: Philogos
 */
#include <stdio.h>
#include <math.h>

int main(void) {
	double y;
	int x, m, f;

	for (y = 1; y >= -1; y -= 0.1) {
		f = 45 * (y - 1) + 31;
		m = acos(y) * 10;

		if (f < m) {
			for (x = 0; x < f; x++)
				printf(" ");
			printf("+");
			for (; x < m; x++)
				printf(" ");
			printf("*");
			for (; x < 62 - m; x++)
				printf(" ");
			printf("*\n");
		} else {
			for (x = 0; x < m; x++)
				printf(" ");
			printf("*");
			for (; x < f; x++)
				printf(" ");
			printf("+");
			for (; x < 62 - m; x++)
				printf(" ");
			printf("*\n");
		}
	}
	return 0;
}

