#define _CRT_SECURE_NO_WARNINGS 1//newc++file.cpp
#include <stdio.h>
//mainǰ��int��main�������ú󷵻�ֵΪһ������
int main()//��������
{


	//printfc���Ա����ṩ������ʹ�õĺ��������˵Ķ���-���к�{#include}��
	//printf("hello\n");
	
	char ch = 'A';
	printf(" % c\n", ch);//%c��ӡ�ַ���ʽ������
	printf("%d\n", sizeof(char));
	int a = 0;
	//short int������
	//long������
	//long long��������
	short age = 20;//1���ֽ�8������λ
	scanf("%d", &a);
	printf("a = %d,age=%d\n", a,age);//%d��ӡ����ʮ���Ƶ�����
							//%f��ӡ������
							//%p�Ե�ַ����ʽ��ӡ
							//%x��ӡ16��������
	float f = 5.0;		//������
	printf("%f\n", f);	
	double d = 3.14;	//˫����
	printf("%lf\n", d);

	return 0;

}