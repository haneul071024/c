#include<stdio.h>
int main() {

	int i = 10;
	int* pi = &i;
	// i=>10, pi는 i주소
	printf("i = %d, pi = %p\n", i, pi);
	
	(*pi)++;// pi값을 가지고 오고 다음문장으로 갈때 값을 1증가
	printf("i = %d, pi = %p\n", i, pi);//11

	*pi++;//pi 값을가져오고 pi 주소를 증가,
	printf("i = %d, pi = %p\n", i, pi);//11

	return 0;
}