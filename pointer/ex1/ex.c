#include <stdio.h>
int main(void)
{
    int a = 100;  //�Ϲݺ��� ����
    int b = 200;  //�����ͺ��� ����
    int* p = NULL;

    p = &a;     // a�ּҸ� �����ͺ��� p�� ����
    printf("a �ּ� = ( %p     )\n", &a);  // a�� �ּ�
    printf("p �ּ�= (   %p   )\n", p);  // p�� �ּ�  ���
    printf("a  ��= (        %d ) \n", a);  // a�� ��
    printf("p  �� = (     %d   )\n", *p);   // p�� ����Ű�� �ּ��� ��

    p = &b;    // b�ּҸ� �����ͺ��� p�� ����
    printf("p �ּ� =(    %p      )\n", p);  // p�� �ּ�  ���    
    printf("p  ��=(    %d       )\n", *p);    // p�� ����Ű�� �ּ��� �� 

    return 0;
}