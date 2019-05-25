/*
 * variable.c
 *
 *  Created on: 2019年5月25日
 *      Author: tsou
 */

#include <stdio.h>
#include <variable.h>

void variable() {
	printf("\n=====variable=====\n");
	int ageOfStudent;
	double scoreOfStudent;
	char levelOfStudent;
	//used uninitialized
	//printf("\n年級\t得分\t等級\n");
	//printf("%d\t%f\t%d\n", ageOfStudent, scoreOfStudent, levelOfStudent);

	ageOfStudent = 5;
	scoreOfStudent = 80.0;
	levelOfStudent = 'B';
	printf("\n年級\t得分\t等級\n");
	printf("%d\t%.2f\t%c\n", ageOfStudent, scoreOfStudent, levelOfStudent);

	const double PI = 3.14;
	//const 變數不能被修改
	//PI = 3.14159;
	printf("PI:%f\n", PI); //單精度
	printf("PI:%lf\n", PI);//倍精度

}
