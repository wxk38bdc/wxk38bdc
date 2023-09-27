#include <stdio.h>

int main() {
	int num1, num2;
	char op;

	printf("请输入两个整数和一个操作符（+,-,*,/）：\n");
	scanf("%d%d%c", &num1, &num2, &op);

	if (op == '+') {
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	} else if (op == '-') {
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	} else if (op == '*') {
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
	} else if (op == '/') {
		if (num2 == 0) {
			printf("Divided by zero!\n");
		} else {
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
		}
	} else {
		printf("Invalid operator!\n");
	}

	return 0;
}