/*
 * data_type.c
 *
 *  Created on: 2019�~5��25��
 *      Author: tsou
 */
#include <stdio.h>
#include <data_type.h>

void data_type() {
	// sizeof(short) �|�^�Ǥ@�� long long unsigned int ���A����
	// Windows �� printf ���䴩 %%llu
	// �]���N���G�૬�� long unsigned int
	printf("\n=====data_type=====\n");
	printf("���A\t\t�j�p�]bytes�^\n");
	printf("short\t\t%lu\n", (long unsigned int) sizeof(short));
	printf("int\t\t%lu\n", (long unsigned int) sizeof(int));
	printf("long\t\t%lu\n", (long unsigned int) sizeof(long));
	printf("float\t\t%lu\n", (long unsigned int) sizeof(float));
	printf("double\t\t%lu\n", (long unsigned int) sizeof(double));
	printf("long double\t%lu\n", (long unsigned int) sizeof(long double));
	printf("char\t\t%lu\n", (long unsigned int) sizeof(char));
	printf("sizeof(1):\t %lu\n", (long unsigned int) sizeof(1)); //int
	printf("sizeof(1.0):\t %lu\n", (long unsigned int) sizeof(1.0)); //double
	printf("%d\n", 26); //10�i��
	printf("%d\n", 032); //8�i��
	printf("%d\n", 0x1A); //16�i��
}
