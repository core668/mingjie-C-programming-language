#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main(void)
{
	/*
	输入的整数能被5整除吗？
	*/
	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 5)
		puts("输入的整数不能被5整除。");
	*/

	/*
	输入的整数是奇数吗？
	*/
	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 2)
		puts("输入的整数是奇数。");
	*/

	/*
	输入的整数能被5整除吗？改进版
	*/
	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 5)
		puts("输入的整数不能被5整除。");
	else
		puts("输入的整数能被5整除。");
	*/

	/*
	输入的整数是奇数还是偶数？
	*/
	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 2)
		puts("输入的整数是奇数。");
	else
		puts("该整数是偶数。");
	*/

	/*
	输入两个整数，判断后者是否是前者的约数，a（倍数）能被b（约数）整除
	*/
	/*
	int A, B;
	puts("请输入两个整数。");

	printf("整数A：");
	scanf("%d", &A);

	printf("整数B：");
	scanf("%d", &B);

	if (A % B)
		puts("B不是A的约数");
	else
		puts("B是A的约数");
	*/

	/*
	输入的整数值是否为0
	*/
	/*
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	if (num)
		puts("该整数不为0");
	else
		puts("该整数为0");
	*/

	/*
	输入的两个整数相等吗？
	*/
	/*
	int n1, n2;

	puts("请输入两个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	if (n1 == n2)
		puts("它们相等。");
	else
		puts("它们不相等");
	*/

	/*
	输入的两个整数不相等吗？
	*/
	/*
	int n1, n2;

	puts("请输入两个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	if (n1 != n2)
		puts("它们不相等。");
	else
		puts("它们相等");
	*/

	/*
	个位数是5吗？
	*/
	/*
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("该整数的个位数是5。");
	else
		puts("该整数的个位数不是5。");
	*/

	/*
	判断输入的整数的符号
	*/
	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0");
	else if (no > 0)
		puts("该整数为正数");
	else
		puts("该整数为负数");		
	*/

	/*
	判断输入的整数的符号，将最后的else改成elseif(n<0)
	*/
	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0");
	else if (no > 0)
		puts("该整数为正数");
	else if (no < 0)
		puts("该整数为负数");
	*/

	/*
	输入一个整数，显示它的绝对值
	*/
	
	/*int num;
	printf("请输入一个整数：");
	scanf("%d", &num);

	if(num>=0)
		printf("绝对值是%d\n", num);
	else
		printf("绝对值是%d\n", -num);*/

	/*
	判断两个整数的大小
	*/
	/*int A, B;
	puts("请输入两个整数。");

	printf("整数A：");
	scanf("%d", &A);

	printf("整数B：");
	scanf("%d", &B);

	if (A == B)
		puts("A和B相等");
	else
		if (A > B)
			puts("A大于B");
		else
			puts("A小于B");*/

	/*
	如果输入的数值为正，则判断该值的奇偶性并显示
	*/
	/*int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	if (num > 0)
		if (num % 2 == 0)
			puts("该整数为偶数。");
		else
			puts("该整数为奇数。");
	else
		puts("您输入的不是正数。\a\n");*/

	/*
	相等运算符和关系运算符的运算结果是1和0
	*/
	/*
	int n = 51;
	printf("%d\n", n > 0);//1
	printf("%d\n", n == 0);//0
	*/

	 /*
	 输入两个整数，显示出其中较大的值
	 */
	/*
	int n1, n2;
	puts("请输入两个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	if (n1 > n2)
		printf("较大的数是%d。\n", n1);
	else
		printf("较大的数是%d。\n", n2);
	*/
	
	/*
	 输入两个整数，显示出其中较大的值改进版
	 */	 
	 /*int n1, n2, max;
	 puts("请输入两个整数。");

	 printf("整数1：");
	 scanf("%d", &n1);

	 printf("整数2：");
	 scanf("%d", &n2);

	 if (n1 > n2)
		 max = n1;
	 else
		 max = n2;
	 printf("较大的数是%d。\n", max);*/
	
	/*
	计算所输入的三个整数中的最大值并显示
	*/
	/*
	int n1, n2, n3, max;
	puts("请输入三个整数。");

	printf("整数1：");
	scanf("%d", &n1);
		 
	printf("整数2：");
	scanf("%d", &n2);

	printf("整数3：");
	scanf("%d", &n3);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;

	printf("最大值是%d", max);
	*/
	
	/*
	 输入两个整数，显示出其中较大的值 条件运算符
	 */
	 /*int n1, n2, max;
	 puts("请输入两个整数。");

	 printf("整数1：");
	 scanf("%d", &n1);

	 printf("整数2：");
	 scanf("%d", &n2);

	 max = (n1 > n2) ? n1 : n2;

	 printf("较大的数是%d。\n", max);*/

	/*
	计算输入的两个整数的差并显示 条件运算符
	*/
	/*int n1, n2;
	puts("请输入两个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	printf("他们的差是%d", (n1 > n2) ? n1 - n2 : n2 - n1);*/

	/*
	计算所输入的三个整数中的最小值并显示
	*/
	
	/*int n1, n2, n3, min;
	puts("请输入三个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	printf("整数3：");
	scanf("%d", &n3);

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	printf("最小值是%d", min);*/

	/*
	计算所输入的四个整数中的最大值并显示
	*/
	
	/*int n1, n2, n3, n4, max;
	puts("请输入三个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	printf("整数3：");
	scanf("%d", &n3);

	printf("整数4：");
	scanf("%d", &n4);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;

	printf("最大值是%d", max);
	*/

	/*
	计算输入的两个整数的差并显示 if语句
	*/
	/*int n1, n2;
	puts("请输入两个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	if (n1 > n2)
		printf("他们的差是%d", n1 - n2);
	else
		printf("他们的差是%d", n2 - n1);*/

	
	/*
	输入的两个整数相等吗？ 条件运算符
	*/
	
	/*int n1, n2;

	puts("请输入两个整数。");

	printf("整数1：");
	scanf("%d", &n1);

	printf("整数2：");
	scanf("%d", &n2);

	printf((n1 == n2) ? "它们相等。" : "它们不相等");*/

	
	
	









	return 0;
}




