#include<stdio.h>

int main() {

	//int ch; //정수형에 주의
	//ch = getchar();//첫번째 문자를 입력받는다
	//putchar(ch); // 문잔데 정수형 가능한이유는 아스키코드값으로 기억하기때문
	char name[100];
	char address[100];

	printf("이름을 입력하시오 : ");
	gets_s(name, sizeof(name));

	printf("현재 거주하는 주소를 입력하시오 : ");
	gets_s(address, sizeof(address));

	puts(name);
	puts(address);

	return 0;
}