#include<stdio.h>
void call_value(int icopy);
void call_refer(int* ip);

int main()
{

	int i = 777;
	call_value(i); //함수호출
	printf("값 호출 : %d\n", i);//777
	//이유는 i와 icopy의 방은 다른거
	call_refer(&i);//함수호출 i주소
	printf("참조 호출: %d\n", i);

	return 0;
}

void call_value(int icopy) {
	//icopy <- 777대입
	icopy = 888;
}

void call_refer(int* ip) {//ip가 i주소 가르킴
	*ip = 888;	//주소가 가르키는 값
}