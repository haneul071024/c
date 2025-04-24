#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
void prl1(int result1);
void prl2(double result2);

int main() {
	
	
	int sel;
	int a, b;
	int res1;
	double res2;
	
		printf("첫번째 숫자를 입력하시오 : ");
		scanf("%d", &a);
		printf("두번째 숫자를 입력하시오 : ");
		scanf("%d", &b);
		
		while (1) {
			printf("원하는 연산을 선택하시오 (1:더하기 2:빼기 3:곱하기 4:나누기): ");
			scanf("%d", &sel);

			if (sel >= 1 && sel <= 4) {
				break;
			}
			else {
				printf("잘못된 선택입니다. 1~4 사이의 숫자를 입력해주세요.\n");
			}
		}
		
			if (sel == 1) res1 = sum(a, b);//함수호출 위에서int선언해서 안써도 된다
			else if (sel == 2) res1 = sub(a, b);
			else if (sel == 3) res1 = mul(a, b);
			else if (sel == 4) res2 = div(a, b);

			if (sel == 1 || sel == 2 || sel == 3)
				prl1(res1);// 함수호출 (정수형 결과 출력)
			else if (sel == 4)
				prl2(res2);//함수호출(실수형 결과 출력)
			else printf("입력오류");
		
	return 0;
}
//매개변수 명 상관없음
int sum(int x, int y)//매개변수는 형 (정수형)을 선언하면서 변수기록 인수와 매개변수는 개수와 형이 같아야함 
{
	int k;
	k = x + y;
	return k; //돌아가는 값이 정수라 함수앞에int작성

}
int sub(int x, int y)
{
	int k;
	k = x - y;
	return k; 

}
int mul(int x, int y) 
{
	int k;
	k = x * y;
	return k; 

}
double div(int x, int y)
{
	double q;
	q = x / (double)y;
	return q;

}
//중요
void prl1(int result1)//res1을 정수형으로 보내면 result1(정수형을 받는다)
	//반환값이 없이 돌아감(void 함수형 처리)	
{
	printf("결과는 %d", result1);//출력완료
	return; //다시 보낼게없으니 안써도 된다 즉 생략 가능
}
void prl2(double result2)
{
	printf("결과는 %.2lf", result2);
	return;
}