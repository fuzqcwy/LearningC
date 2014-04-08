/*
 * counter.c
 *
 *  Created on: 2014Äê3ÔÂ26ÈÕ
 *      Author: Philogos
 */
#include <stdio.h>
					// 3/26/2014
int main(void){
	int max = -32768;			// max -> min value
	int min = 32767;
	int i,in;
	int sum = 0;

	for(i = 0 ; i < 10 ; i++){
		scanf("%d",&in);
		if(in > max)
			max = in;
		if(in < min)
			min = in;
		sum += in;
	}
	sum -= (min + max);
	sum /= 8;
	printf("average grade:%d\n",sum);

	return 0;
}

