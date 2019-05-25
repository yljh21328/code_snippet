/*
 * output.c
 *
 *  Created on: 2019年5月25日
 *      Author: tsou
 */

#include <output.h>
#include <stdio.h>
#include <stdlib.h>

void output() {
	printf("\n=====output=====\n");
	printf("顯示字元 %c\n", 'A');
	printf("顯示字元編碼 %d\n", 'A');
	printf("顯示字元編碼 %c\n", 65);
	printf("顯示十進位整數 %d\n", 15);
	printf("顯示八進位整數 %o\n", 15);
	printf("顯示十六進位整數 %X\n", 15);
	printf("顯示十六進位整數 %x\n", 15);
	printf("顯示科學記號 %E\n", 0.001234);
	printf("顯示科學記號 %e\n", 0.001234);
	int *ptr = NULL;
	ptr = malloc(1);
	printf("顯示指標%p\n", ptr);

	//顯示print了幾個字元
	int count = printf("This is a test!\n");
	printf("%d\n", count);

	//指定到小數點後第二位
	printf("example:%.2f\n", 19.234);

	//保留6個寬度位置給浮點數(靠右對齊)
	printf("example:%6.2f\n", 19.234);
	//保留6個寬度位置給浮點數(靠左對齊)
	printf("example:%-6.2f\n", 19.234);

	//以參數的方式保留寬度
	printf("===%*d===\n", 1, 1);
	printf("===%*d===\n", 2, 1);
	printf("===%*d===\n", 3, 1);
	printf("===%-*d===\n", 1, 1);
	printf("===%-*d===\n", 2, 1);
	printf("===%-*d===\n", 3, 1);
}
