#include <stdio.h>

int main()
{
	//Write C code here
	int num1 = 10;
	int num2 = 20;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 18);//°ÅÁş(0)
	result2 = (num1 < 18 || num2 > 18);//Âü(1)
	result3 = (!num1);//!not ->¹İ´ë
								//num1ÀÌ 10(Âü) ->¹İ´ë ->°ÅÁş(0)

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
}