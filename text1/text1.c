#define _CRT_SECURE_NO_WARNINGS 1//newc++file.cpp
#include <stdio.h>
//main前面int是main函数调用后返回值为一个整型
int main()//程序的入口
{


	//printfc语言本身提供给我们使用的函数【别人的东西-打招呼{#include}】
	//printf("hello\n");
	
	char ch = 'A';
	printf(" % c\n", ch);//%c打印字符格式的数据
	printf("%d\n", sizeof(char));
	int a = 0;
	//short int短整型
	//long长整型
	//long long更长整型
	short age = 20;//1个字节8个比特位
	scanf("%d", &a);
	printf("a = %d,age=%d\n", a,age);//%d打印整型十进制的数据
							//%f打印浮点型
							//%p以地址的形式打印
							//%x打印16进制数字
	float f = 5.0;		//单精度
	printf("%f\n", f);	
	double d = 3.14;	//双精度
	printf("%lf\n", d);

	return 0;

}