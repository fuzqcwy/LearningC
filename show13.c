/*
 * show13.c
 *
 *  Created on: 2014��4��4��
 *      Author: Philogos
 */
#include <stdio.h>
// c100_6: ���13��13�η��������λ��
int main(void) {
	int n = 13;
	int i;

	for (i = 0; i < 12; i++) {
		n *= 13;
		n %= 1000;
	}

	printf("%d\n", sizeof(n));
	printf("n = %d\n", n);
	return 0;
}

