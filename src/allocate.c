/*
 * allocate.c
 *
 *  Created on: 2019�~5��25��
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
	printf("�Ŷ���m:%p\n", ptr);
	printf("�Ŷ��x�s�ȡG%d\n", *ptr);

	free(ptr);
}
