//6432168421
//00010000
//01010000
#include<stdio.h>
int main() {

	printf("논리 and=> %d\n", 1 && 0);
	printf("논리 or=> %d\n", 1 || 0);

	int num1 = 16, num2 = 80;
	printf("비트 and=> %d\n", num1 & num2);
	printf("비트 or=> %d\n", num1 | num2);
	printf("비트 xor=> %d\n", num1 ^ num2);
}