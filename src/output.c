/*
 * output.c
 *
 *  Created on: 2019�~5��25��
 *      Author: tsou
 */

#include <output.h>
#include <stdio.h>
#include <stdlib.h>

void output() {
	printf("\n=====output=====\n");
	printf("��ܦr�� %c\n", 'A');
	printf("��ܦr���s�X %d\n", 'A');
	printf("��ܦr���s�X %c\n", 65);
	printf("��ܤQ�i���� %d\n", 15);
	printf("��ܤK�i���� %o\n", 15);
	printf("��ܤQ���i���� %X\n", 15);
	printf("��ܤQ���i���� %x\n", 15);
	printf("��ܬ�ǰO�� %E\n", 0.001234);
	printf("��ܬ�ǰO�� %e\n", 0.001234);
	int *ptr = NULL;
	ptr = malloc(1);
	printf("��ܫ���%p\n", ptr);
}