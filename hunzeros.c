/*
 * hunzeros.c
 *
 *  Created on: 2014年4月4日
 *      Author: Philogos
 */
#include <stdio.h>
							// 100！后面有多少个零
int main(void) {
	int i;
	int target = 1, c = 0;
	int countzerosoftail(int target, int *count);

	for(i = 5 ; i <= 100 ; i += 5){
		c++;
		if(i % 25 == 0)
			c++;
	}

	/*
	for (i = 1; i <= 100; i++) {
		target *= i;

		if (target % 10 == 0)
			target = countzerosoftail(target, &c);
	}
*/
	printf("count = %d\n", c);
	return 0;
}

int countzerosoftail(int target, int *count) {
	while (target % 10 == 0) {
		(*count)++;
		target /= 10;
	}
	target %= 100;
	printf("count = %d\n", *count);
	return target;
}
