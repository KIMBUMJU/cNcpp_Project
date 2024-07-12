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
		printf("두 숫자를 입력하시오: ");
		scanf("%Lf %Lf", &num1, &num2);
		getchar();

		printf("실행시킬 연산자에 해당하는 번호를 입력하시오\n");
		printf("1. +    2. -    3. *    4. /\n");
		scanf("%d", &signum);
		getchar();

		if (signum == 1 || signum == 2 || signum == 3 || signum == 4) {
			result = Calculator(num1, signum, num2);
			printf("정답: %Lf\n", result);
			printf("계속 진행하시려면 \'y\'를, 사용을 멈추시려면 \'y\'를 제외한 아무 키를 입력한 후 엔터키를 눌러주세요.\n");
			scanf("%c", &ans);
			getchar();
			if (ans == 'y') {
				continue;
			}
			else {
				printf("사용해 주셔서 감사합니다.");
				return 0;
			}
		}
		else {
			printf("1이상 4이하의 정수만 입력이 가능합니다.\n");
			printf("다시 시작하시려면 \'y\'를, 사용을 멈추시려면 \'y\'를 제외한 아무 키를 입력한 후 엔터키를 눌러주세요.\n");
			scanf("%c", &ans);
			getchar();
			if (ans == 'y') {
				continue;
			}
			else {
				printf("사용해 주셔서 감사합니다.");
				return 0;
			}
		}
	} while (1);




	return 0;
}