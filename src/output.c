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

	//���print�F�X�Ӧr��
	int count = printf("This is a test!\n");
	printf("%d\n", count);

	//���w��p���I��ĤG��
	printf("example:%.2f\n", 19.234);

	//�O�d6�Ӽe�צ�m���B�I��(�a�k���)
	printf("example:%6.2f\n", 19.234);
	//�O�d6�Ӽe�צ�m���B�I��(�a�����)
	printf("example:%-6.2f\n", 19.234);

	//�H�Ѽƪ��覡�O�d�e��
	printf("===%*d===\n", 1, 1);
	printf("===%*d===\n", 2, 1);
	printf("===%*d===\n", 3, 1);
	printf("===%-*d===\n", 1, 1);
	printf("===%-*d===\n", 2, 1);
	printf("===%-*d===\n", 3, 1);
}
