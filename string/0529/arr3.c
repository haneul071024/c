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
//        return a[i] % 3 + f(i - 1); //��� �Լ� (4�϶�) 1+(3�϶�) 2 + (2�϶�) 0 + (1�϶�) 1
//}
// �Լ��� �ڱ� �ڽ��� ȣ���� ���� �ִ�. �̰��� ��ȯ(recursion)��� �θ���.
// ����Լ�(��� ȣ��(recursive call))�̶� �Լ� ���ο��� �Լ��� �ڱ� �ڽ��� �Ǵٽ� ȣ���ϴ� ����(�����θ� ȣ��)
// �Լ� ���� ��� ȣ���� �ߴ��ϵ��� ������ ����� ��ɹ��� �ݵ�� ����
int func(int);
int main() {
	int a;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s(" %d", &a);
	printf("%d", func(a));

}
int func(int a) {

	if (a <  = 1)return 1;
	return a * func(a - 1);

}