#include<stdio.h>
void swap(int* px, int* py);
int main() {
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b); //100,200

	swap(&a, &b);//함수호출 (값이 아닌 주소를 보냄)
	//함수호출 후
	printf("a = %d b = %d\n", a, b);//200, 100
	return 0;
}
void swap(int* px, int* py) {// a주소->px b주소 ->py

	int tmp;

	tmp = *px;//px가a주소를 가리키고 있는데 그 값(100)
	*px = *py;//py가 b주소를 가리키고 있는데 그 값(200)
					//px의 주소인 a에 저장
	*py = tmp;

}