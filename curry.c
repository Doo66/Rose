/*************************************************************************
	> File Name: curry.c
	> Author:    xjf
	> Mail:      doo_magic@126.com
	> Created Time: 2016年04月06日 星期三 19时50分00秒
 ************************************************************************/

#include<stdio.h>

/*void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}*/

void Swap(int&p1,int&p2)
{
	int tmp = p1;
	p1 = p2;
	p2 = tmp;
}
int main()
{
	int a,b;
	printf("Please enter two numbers: ");
	scanf("%d %d",&a, &b);
	Swap(a, b);
	printf("a = %d, b = %d\n", a ,b);
	return 0;
}
