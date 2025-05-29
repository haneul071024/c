#include <stdio.h>

//int f();
//int main()
//{
//    printf("%d", f(4));
//}
//
//int f(int i)
//{
//    int a[5] = { 5,4,3,2,1 };
//    if (i <= 0)
//        return 0;
//    else
//        return a[i] % 3 + f(i - 1); //재귀 함수 (4일때) 1+(3일때) 2 + (2일때) 0 + (1일때) 1
//}
// 함수는 자기 자신을 호출할 수도 있다. 이것을 순환(recursion)라고 부른다.
// 재귀함수(재귀 호출(recursive call))이란 함수 내부에서 함수가 자기 자신을 또다시 호출하는 행위(스스로를 호출)
// 함수 내에 재귀 호출을 중단하도록 조건이 변경될 명령문을 반드시 포함
int func(int);
int main() {
	int a;
	printf("숫자를 입력하시오:");
	scanf_s(" %d", &a);
	printf("%d", func(a));

}
int func(int a) {

	if (a <  = 1)return 1;
	return a * func(a - 1);

}