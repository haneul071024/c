#define page 5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//str~문자열 함수 포함//strcmp사용
int main() {

	int i;
	char dic[page][2][30] = {//3차원 5면->2행->30열 구성
		{"book","책"}	
		//0면->0행:book ->0열 b 1열o 2열o 3열k
				//1행:->0열 책
		,{ "boy", "소년" }//1면->0행:boy 1행: 소년
		, { "computer","컴퓨터" }//2면
		, { "apple", "사과" }//3면
		, { "rain", "비" }//4면
	};
	char word[30];//30열 선언->입력받을 글자배열
	printf("단어를 입력하시오:");
	scanf("%s", word);//29글자이내 글자입력
								//&(주소)쓰지않는 이유:문자배열 이름만 쓰는경우는 그자체가 주소를 의미함
	for ( i = 0; i < page; i++)
	{
		if (strcmp(dic[i][0], word) == 0)//같은단어가 있냐
			//각 면마다0행의 영어단어와 비교
			//strcmp : 문자열 비교,같은것이 있으면 0발생
		{
			printf("%s:%s\n", word, dic[i][1]);
			//해당하는 면의 1행을 출력(1행은 한글로 번역글자
			//정상적 종료
			return 0;
		}
	}
	printf("사전에서 발견되지 않았습니다\n");
	return 0;
	//5번 반복문을 수행을 해도 찾지못할 경우
}