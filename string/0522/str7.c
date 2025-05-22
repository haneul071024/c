#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h> 
int main() {
	char name[5][10];//5행 10열 몇명의 이름->5
								//그이름은 각각9자
	char addr[5][30];//몇명의 주소->5
								//주소는 각각 29자
	char search[10];//찾고자 하는 사람의 이름 9자 이내로
								
	int i;
	//암기!!!!!!!!!!!!
	/*char a[10];
	scanf("%c", &a[0]);
	scanf("%s", a);

	char b[5][10]
	scanf("%c", &b[1][5]);
	scanf("%s", b[2]);*/

	for (i = 0; i < 5; i++) //5명입력 0~4번째 방에 입력
	{
		printf("이름 : %d ", i + 1);//i가 0이지만 출력문에서 첫번째 뜻으로 1을 출력하기 위해 i+1
		scanf("%s", name[i]);//이름 5명것을 반복하여 입력받음
		printf("주소 : %d ", i + 1);
		scanf("%s", addr[i]);
	}
	//검색할 이름 입력받기
	printf("검색할 이름 입력하세요:");
	scanf("%s", search);// 찾고자 하는 이름은 SEARCH에 들어있다
	
	for ( i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("이름: %s 주소 : %s\n", name[i], addr[i]);
			return 0;
		}
	}
	printf("찾는 이름이 없습니다");

	return 0;

}