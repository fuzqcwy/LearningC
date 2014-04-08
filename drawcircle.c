/*
 * drawcircle.c
 *
 *  Created on: 2014Äê3ÔÂ25ÈÕ
 *      Author: Philogos
 */
#include <stdio.h>
#include <math.h>

					// 3/25/2014
int main(void){
	double y;
	int x,m;

	for(y = 10 ; y >= -10 ; y--){
		x = sqrt(100 - y * y) * 2;

		for(m = 1 ; m <= 60 ; m++){
			if(m == 30 - x || m == 30 + x)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}

