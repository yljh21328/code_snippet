/*
 * arithmetic.c
 *
 *  Created on: 2019年5月26日
 *      Author: tsou
 */

#include <calculate.h>
#include <stdio.h>
#include <stdlib.h> //亂數相關函數

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

	printf("輸入學生分數：");
	scanf("%d", &score);

	printf("該生是否及格？%c\n", score >= 60 ? 'Y' : 'N');
}

void calculate4() {
	int input = 0;

	printf("輸入整數：");
	scanf("%d", &input);

	printf("該數為奇數？%c\n", input % 2 ? 'Y' : 'N');
}

void calculate5() {
	int num = 75;
	printf("%d\n", num > 70 && num < 80);
	printf("%d\n", num > 80 || num < 75);
	printf("%d\n", !(num > 80 || num < 75));

}

void calculate6() {
	puts("AND運算：");
	printf("0 AND 0\t\t%d\n", 0 & 0);
	printf("0 AND 1\t\t%d\n", 0 & 1);
	printf("1 AND 0\t\t%d\n", 1 & 0);
	printf("1 AND 1\t\t%d\n\n", 1 & 1);

	puts("OR運算：");
	printf("0 OR 0\t\t%d\n", 0 | 0);
	printf("0 OR 1\t\t%d\n", 0 | 1);
	printf("1 OR 0\t\t%d\n", 1 | 0);
	printf("1 OR 1\t\t%d\n\n", 1 | 1);

	puts("XOR運算：");
	printf("0 XOR 0\t\t%d\n", 0 ^ 0);
	printf("0 XOR 1\t\t%d\n", 0 ^ 1);
	printf("1 XOR 0\t\t%d\n", 1 ^ 0);
	printf("1 XOR 1\t\t%d\n\n", 1 ^ 1);

	puts("NOT運算：");
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

	printf("輸入正整數：");
	scanf("%d", &input);

	printf("輸入為奇數？%c\n", input & 1 ? 'Y' : 'N');
}

void calculate9() {
	char ch = 'A';

	printf("before encoding：%c\n", ch);

	ch = ch ^ 0x7;
	printf("after encoding：%c\n", ch);

	ch = ch ^ 0x7;
	printf("decoding：%c\n", ch);
}

void calculate10() {
	int num = 1;

	printf("2 的 0 次：%d\n", num);

	num = num << 1;
	printf("2 的 1 次：%d\n", num);

	num = num << 1;
	printf("2 的 2 次：%d\n", num);

	num = num << 1;
	printf("2 的 3 次：%d\n", num);
}

void calculate11() {
	int i = 0;
	int num = 0;

	num = ++i;   // 相當於i = i + 1; num = i;
	printf("%d\n", num);

	num = --i;    // 相當於i = i - 1; num = i;
	printf("%d\n", num);
}

void calculate12() {
	int i = 0;
	int num = 0;

	num = i++;    // 相當於num = i; i = i + 1;
	printf("%d\n", num);

	num = i--;     // 相當於 num = i; i = i - 1;
	printf("%d\n", num);
}
