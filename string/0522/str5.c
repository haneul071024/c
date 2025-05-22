#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main() {
	char key[] = "C";
	char buffer[80] = "";
	do
	{
		printf("임베디드 장치에 가장많이 사용되는 언어는? ");
		gets(buffer);//엔터키 칠때마다 -> 버퍼 기억
	} while (strcmp(key, buffer) !=0);//같지않으면 반복//기억한다
	//strcmp는 두문자열을 비교하여 같으면 0결과로 나옴
	// 아니면0이 아닌값
	//strcpy: 복사 대입
	//strcat:연결
	//strcmp: 문자비교
	
	
	printf("맞았습니다");

	return 0;

}