#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// from now on I will study C language

long double sum(long double num1, long double num2) {

	long double result;

	result = num1 + num2;

	return result;

}

long double sub(long double num1, long double num2) {

	long double result;

	result = num1 - num2;

	return result;

}

long double mul(long double num1, long double num2) {

	long double result;

	result = num1 * num2;

	return result;

}

long double dvd(long double num1, long double num2) {

	long double result;

	result = num1 / num2;

	return result;

}

long double Calculator(long double num1, int signum, long double num2) {
	long double result = 0;
	if (signum == 1) {
		result = sum(num1, num2);
	}
	else if (signum == 2) {
		result = sub(num1, num2);
	}
	else if (signum == 3) {
		result = mul(num1, num2);
	}
	else if (signum == 4) {
		result = dvd(num1, num2);
	}
	return result;
}


int main() {

	long double num1, num2, result;
	char sign, ans;
	int signum;

	do {
		printf("�� ���ڸ� �Է��Ͻÿ�: ");
		scanf("%Lf %Lf", &num1, &num2);
		getchar();

		printf("�����ų �����ڿ� �ش��ϴ� ��ȣ�� �Է��Ͻÿ�\n");
		printf("1. +    2. -    3. *    4. /\n");
		scanf("%d", &signum);
		getchar();

		if (signum == 1 || signum == 2 || signum == 3 || signum == 4) {
			result = Calculator(num1, signum, num2);
			printf("����: %Lf\n", result);
			printf("��� �����Ͻ÷��� \'y\'��, ����� ���߽÷��� \'y\'�� ������ �ƹ� Ű�� �Է��� �� ����Ű�� �����ּ���.\n");
			scanf("%c", &ans);
			getchar();
			if (ans == 'y') {
				continue;
			}
			else {
				printf("����� �ּż� �����մϴ�.");
				return 0;
			}
		}
		else {
			printf("1�̻� 4������ ������ �Է��� �����մϴ�.\n");
			printf("�ٽ� �����Ͻ÷��� \'y\'��, ����� ���߽÷��� \'y\'�� ������ �ƹ� Ű�� �Է��� �� ����Ű�� �����ּ���.\n");
			scanf("%c", &ans);
			getchar();
			if (ans == 'y') {
				continue;
			}
			else {
				printf("����� �ּż� �����մϴ�.");
				return 0;
			}
		}
	} while (1);




	return 0;
}