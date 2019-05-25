/*
 * input.c
 *
 *  Created on: 2019年5月25日
 *      Author: tsou
 */

#include <stdio.h>
#include <input.h>

void input1() {
	int input;

	printf("請輸入數字：");
	scanf("%d", &input);

	printf("您輸入的數字：%d\n", input);
}

void input2() {
	int number1, number2;

	printf("請輸入兩個數字，中間使用空白區隔）：");
	scanf("%d %d", &number1, &number2);
	printf("您輸入的數字：%d %d\n", number1, number2);

	printf("請再輸入兩個數字，中間使用-號區隔）：");
	scanf("%d-%d", &number1, &number2);
	printf("您輸入的數字：%d-%d\n", number1, number2);
}

void input3() {
	char str[50];

	//限定輸出字元為1~5
	printf("請輸入 1 到 5 的字元：");
	scanf("%[1-5]", str);
	printf("輸入的字元為 %s\n", str);

	//若輸入不符合的字元，則其餘字元會存留在緩衝區
	fflush(stdin); // 清除輸入緩衝區

	//限定輸出字元為XYZ
	printf("請輸入 XYZ 任一字元：");
	scanf("%[XYZ]", str);
	printf("輸入的字元為 %s\n", str);
}

void input4() {
	char c;

	printf("請輸入一個字元：");
	c = getchar();

	putchar(c);
	putchar('\n');
}

void input5() {
	char str[20];

	puts("請輸入字串：");
	//C11 後已不再是標準函式庫，用fgets替代
	gets(str);

	puts("輸入的字串為：");
	puts(str);

	puts("請輸入字串：");
	fgets(str, sizeof(str), stdin);

	puts("輸入的字串為：");
	puts(str);
}
