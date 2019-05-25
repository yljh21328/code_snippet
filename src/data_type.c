/*
 * data_type.c
 *
 *  Created on: 2019年5月25日
 *      Author: tsou
 */
#include <stdio.h>
#include <data_type.h>

void data_type() {
	// sizeof(short) 會回傳一個 long long unsigned int 型態的值
	// Windows 的 printf 不支援 %%llu
	// 因此將結果轉型為 long unsigned int
	printf("\n=====data_type=====\n");
	printf("型態\t\t大小（bytes）\n");
	printf("short\t\t%lu\n", (long unsigned int) sizeof(short));
	printf("int\t\t%lu\n", (long unsigned int) sizeof(int));
	printf("long\t\t%lu\n", (long unsigned int) sizeof(long));
	printf("float\t\t%lu\n", (long unsigned int) sizeof(float));
	printf("double\t\t%lu\n", (long unsigned int) sizeof(double));
	printf("long double\t%lu\n", (long unsigned int) sizeof(long double));
	printf("char\t\t%lu\n", (long unsigned int) sizeof(char));
	printf("sizeof(1):\t %lu\n", (long unsigned int) sizeof(1)); //int
	printf("sizeof(1.0):\t %lu\n", (long unsigned int) sizeof(1.0)); //double
	printf("%d\n", 26); //10進制
	printf("%d\n", 032); //8進制
	printf("%d\n", 0x1A); //16進制
}
