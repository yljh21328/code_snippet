/*
 * input.c
 *
 *  Created on: 2019�~5��25��
 *      Author: tsou
 */

#include <stdio.h>
#include <input.h>

void input1() {
	int input;

	printf("�п�J�Ʀr�G");
	scanf("%d", &input);

	printf("�z��J���Ʀr�G%d\n", input);
}

void input2() {
	int number1, number2;

	printf("�п�J��ӼƦr�A�����ϥΪťհϹj�^�G");
	scanf("%d %d", &number1, &number2);
	printf("�z��J���Ʀr�G%d %d\n", number1, number2);

	printf("�ЦA��J��ӼƦr�A�����ϥ�-���Ϲj�^�G");
	scanf("%d-%d", &number1, &number2);
	printf("�z��J���Ʀr�G%d-%d\n", number1, number2);
}

void input3() {
	char str[50];

	//���w��X�r����1~5
	printf("�п�J 1 �� 5 ���r���G");
	scanf("%[1-5]", str);
	printf("��J���r���� %s\n", str);

	//�Y��J���ŦX���r���A�h��l�r���|�s�d�b�w�İ�
	fflush(stdin); // �M����J�w�İ�

	//���w��X�r����XYZ
	printf("�п�J XYZ ���@�r���G");
	scanf("%[XYZ]", str);
	printf("��J���r���� %s\n", str);
}

void input4() {
	char c;

	printf("�п�J�@�Ӧr���G");
	c = getchar();

	putchar(c);
	putchar('\n');
}

void input5() {
	char str[20];

	puts("�п�J�r��G");
	//C11 ��w���A�O�зǨ禡�w�A��fgets���N
	gets(str);

	puts("��J���r�ꬰ�G");
	puts(str);

	puts("�п�J�r��G");
	fgets(str, sizeof(str), stdin);

	puts("��J���r�ꬰ�G");
	puts(str);
}
