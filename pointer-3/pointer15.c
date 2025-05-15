#include<stdio.h>
int main() {
	//이중포인터 프로그램
	//포인터를 선언할때 *를 두번사용하면 포인터의 포인터(이중포인터)를 선언한다
	//자료형**포인트이름
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i=%d\n", i);

	**q = 300;//*는 q가 가르키고있는값
	printf("i=%d\n", i);

	return 0;

}