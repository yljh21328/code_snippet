/*
 * arithmetic.c
 *
 *  Created on: 2019�~5��26��
 *      Author: tsou
 */

#include <calculate.h>
#include <stdio.h>
#include <stdlib.h> //�üƬ������

void calculate1() {
	printf("%d\n", 1 + 2 * 3);
	printf("%d\n", (1 + 2 + 3) / 4);
	printf("%d\n", rand() % 100);

	int number1 = 10;
	printf("%d\n", number1 / 3);

	double number2 = 10.0;
	printf("%f\n", number2 / 3);

	int num = 0;
	double number3 = 3.14;
	num = number3;
	printf("%d\n", num);

	int number4 = 10;
	printf("%f\n", (double) number4 / 3);
}

void calculate2() {
	printf("10 > 5\t\t%d\n", 10 > 5);
	printf("10 >= 5\t\t%d\n", 10 >= 5);
	printf("10 < 5\t\t%d\n", 10 < 5);
	printf("10 <= 5\t\t%d\n", 10 <= 5);
	printf("10 == 5\t\t%d\n", 10 == 5);
	printf("10 != 5\t\t%d\n", 10 != 5);

}

void calculate3() {
	int score = 0;

	printf("��J�ǥͤ��ơG");
	scanf("%d", &score);

	printf("�ӥͬO�_�ή�H%c\n", score >= 60 ? 'Y' : 'N');
}

void calculate4() {
	int input = 0;

	printf("��J��ơG");
	scanf("%d", &input);

	printf("�ӼƬ��_�ơH%c\n", input % 2 ? 'Y' : 'N');
}

void calculate5() {
	int num = 75;
	printf("%d\n", num > 70 && num < 80);
	printf("%d\n", num > 80 || num < 75);
	printf("%d\n", !(num > 80 || num < 75));

}

void calculate6() {
	puts("AND�B��G");
	printf("0 AND 0\t\t%d\n", 0 & 0);
	printf("0 AND 1\t\t%d\n", 0 & 1);
	printf("1 AND 0\t\t%d\n", 1 & 0);
	printf("1 AND 1\t\t%d\n\n", 1 & 1);

	puts("OR�B��G");
	printf("0 OR 0\t\t%d\n", 0 | 0);
	printf("0 OR 1\t\t%d\n", 0 | 1);
	printf("1 OR 0\t\t%d\n", 1 | 0);
	printf("1 OR 1\t\t%d\n\n", 1 | 1);

	puts("XOR�B��G");
	printf("0 XOR 0\t\t%d\n", 0 ^ 0);
	printf("0 XOR 1\t\t%d\n", 0 ^ 1);
	printf("1 XOR 0\t\t%d\n", 1 ^ 0);
	printf("1 XOR 1\t\t%d\n\n", 1 ^ 1);

	puts("NOT�B��G");
	printf("NOT 0\t\t%d\n", !0);
	printf("NOT 1\t\t%d\n\n", !1);
}

void calculate7() {
	char num1 = 127;

	printf("%d\n", num1);
	num1 = ~num1;
	printf("%d\n", num1);
	unsigned char num2 = 255;

	printf("%u\n", num2);
	num2 = ~num2;
	printf("%u\n", num2);
}

void calculate8() {
	int input = 0;

	printf("��J����ơG");
	scanf("%d", &input);

	printf("��J���_�ơH%c\n", input & 1 ? 'Y' : 'N');
}

void calculate9() {
	char ch = 'A';

	printf("before encoding�G%c\n", ch);

	ch = ch ^ 0x7;
	printf("after encoding�G%c\n", ch);

	ch = ch ^ 0x7;
	printf("decoding�G%c\n", ch);
}

void calculate10() {
	int num = 1;

	printf("2 �� 0 ���G%d\n", num);

	num = num << 1;
	printf("2 �� 1 ���G%d\n", num);

	num = num << 1;
	printf("2 �� 2 ���G%d\n", num);

	num = num << 1;
	printf("2 �� 3 ���G%d\n", num);
}

void calculate11() {
	int i = 0;
	int num = 0;

	num = ++i;   // �۷��i = i + 1; num = i;
	printf("%d\n", num);

	num = --i;    // �۷��i = i - 1; num = i;
	printf("%d\n", num);
}

void calculate12() {
	int i = 0;
	int num = 0;

	num = i++;    // �۷��num = i; i = i + 1;
	printf("%d\n", num);

	num = i--;     // �۷�� num = i; i = i - 1;
	printf("%d\n", num);
}
