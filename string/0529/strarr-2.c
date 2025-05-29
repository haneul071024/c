#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	int i;
	char fruits[3][20];//3행 20열
	for ( i = 0; i < 3; i++)//i<3만큼 반복
	{
		printf("과일 이름을 입력하시오: ");
		scanf("%s", fruits[i]);//i가 i<3만큼 반복되며 행이바뀐다
	}
	for ( i = 0; i < 3; i++)
	{
		printf("%d번째 과일:%s\n", i, fruits[i]);//i<3만큼 반복되며 위에 scanf로 저장된 값이 나온다
	}
	return 0;

}