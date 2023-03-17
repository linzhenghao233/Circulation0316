#include <stdio.h>
#include <ctype.h>
#include <math.h>

//int main(void) {
//	double sum1, sum2, sum3;
//	int i, j;
//	sum1 = sum2 = sum3 = 0;
//
//	for (i = 1, j = 1; (double)1 / i > pow(10, -4); i += 2, j++) {
//		if (j == 1 || j % 2 != 0)
//			sum1 += (double)1 / i;
//		else
//			sum2 += (double)1 / i;
//	}
//	sum3 = sum1 - sum2;
//	printf("%g", sum3 * 4);
//
//	return 0;
//}

//int main(void) {
//	int A, B, C, D, i, status[5];
//	char max;
//
//	A = 1 - 1;
//	B = 1 + 1;
//	C = 1 + 1 - 1;
//	D = 1;
//
//	max = A < B ? (B < C ? (C < D ? D:C): (max = B < D ? D : B)): (A < C ? (C < D ? D : C) : (A < D ? D : A));
//	if (max == A)
//		printf("A最有嫌疑。");
//	else if(max == B)
//		printf("B最有嫌疑。");
//	else if(max == C)
//		printf("C最有嫌疑。");
//	else if(max == D)
//		printf("D最有嫌疑。");
//
//	return 0;
//}

int main(void) {
	int num1, num2, i, min, common_divisor;
	common_divisor = 0;

	printf("输入两个整数：");
	scanf_s("%d %d", &num1, &num2);
	min = num1 < num2 ? num1 : num2;
	for (i = 1; i <= min; i++) {
		if (num1 % i == 0 && num2 % i == 0)
			common_divisor = i;
	}
	printf("最大公约数为：%d", common_divisor);

	return 0;
}