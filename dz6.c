#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int x,y;
	printf("Введите чилсо до 1000 ");
	scanf_s("%d",&x);
	printf("цифра 1 - первая цифра числа, цифра 2 последняя цифра числа \n");
	scanf_s("%d",&y);
	if (y == 1) {
		if (x >= 100) {
			printf("первая цифра - %d\n", x / 100);
		}
		else if (x >= 10) {
			printf("первая цифра - %d\n", x / 10);
		}
		else {
			printf("%d\n",x);
		}
	}
	else if (y == 2) {
		printf("последня цифра - %d\n", x % 10);
	}
	else {
		printf("Ошибка\n");
	}
	system("pause");
	return 0;
}