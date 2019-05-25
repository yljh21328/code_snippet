/*
 * allocate.c
 *
 *  Created on: 2019年5月25日
 *      Author: tsou
 */
#include <stdio.h>
#include <stdlib.h>

#include <allocate.h>

void allocate() {
	printf("\n=====allocate=====\n");
	int *ptr;
	ptr = malloc(sizeof(int));
	*ptr = 200;
	printf("空間位置:%p\n", ptr);
	printf("空間儲存值：%d\n", *ptr);

	free(ptr);
}
