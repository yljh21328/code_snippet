/*
 * variable.c
 *
 *  Created on: 2019�~5��25��
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
	//printf("\n�~��\t�o��\t����\n");
	//printf("%d\t%f\t%d\n", ageOfStudent, scoreOfStudent, levelOfStudent);

	ageOfStudent = 5;
	scoreOfStudent = 80.0;
	levelOfStudent = 'B';
	printf("\n�~��\t�o��\t����\n");
	printf("%d\t%.2f\t%c\n", ageOfStudent, scoreOfStudent, levelOfStudent);

	const double PI = 3.14;
	//const �ܼƤ���Q�ק�
	//PI = 3.14159;
	printf("PI:%f\n", PI); //����
	printf("PI:%lf\n", PI);//�����

}
