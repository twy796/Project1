#include<stdio.h>
int main()
{
	char c = 'B'; // 字符常量
	printf("c=%c\n", c+32); // %c 用于输出字符
	printf("c的ASCII码=%d\n", c); // %d 用于输出整数，字符会被转换为其ASCII码
	return 0;
} // 输出字符和其对应的ASCII码
