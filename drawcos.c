/*
 * main.c
 *
 *  Created on: 2014Äê3ÔÂ24ÈÕ
 *      Author: Philogos
 */
#include <stdio.h>
#include <math.h>

int main(void) {
	double y;
	int x, m;

	for (y = 1; y >= -1; y -= 0.1) {
		m = acos(y) * 10;

		for (x = 0; x <= 62; x++)
			if (x == m || x == 62 - m)
				printf("*");
			else
				printf(" ");
		printf("\n");

		/*
		 for(x = 1 ; x < m; x++) printf(" ");
		 printf("*");
		 for(; x < 62 - m; x++) printf(" ");
		 printf("*\n");
		 */

	}

	return 0;
}

