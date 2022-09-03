#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{

	/*
	读取两个整数的值，然后显示它们的和、差、积、商和余数
	*/

	/*
	int vx;
	int vy;
	puts("请输入两个整数。");
	printf("整数vx：");
	scanf("%d", &vx);

	printf("整数vy：");
	scanf("%d", &vy);

	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);
	*/

	/*
	显示读取整数的最后一位数字
	*/

	/*
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	printf("最后一位是%d。\n", no % 10);
	*/

	/*
	printf("%d\n", -22 / -5);//4
	printf("%d\n", -22 % -5);//-2
	printf("%d\n", -22 / 5);//-4
	printf("%d\n", -22 % 5);//-2
	printf("%d\n", 22 / -5);//-4
	printf("%d\n", 22 % -5);//2
	*/

	/*
	读取两个整数，显示它们的商和余数
	*/
	/*
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);

	printf("a除以b得%d余%d。", a / b, a % b);
	*/

	/*
	读取两个整数，显示前者是后者的百分之几
	*/

	/*
	int x, y;

	puts("请输入两个整数。");
	printf("整数x：");
	scanf("%d", &x);

	printf("整数y：");
	scanf("%d", &y);

	printf("x的值是y的%d%%", x * 100 / y );
	*/

	/*
	读取两个整数，输出它们的和及积
	*/

	/*
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	
	printf("它们的和是%d，积是%d", a + b, a * b);
	*/

	/*
	读取两个整数，显示它们的平均值
	*/
	/*
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);

	printf("整数b：");
	scanf("%d", &b);

	printf("它们的平均值是%d", (a + b) / 2);//42
	*/

	/*
	整数和浮点数
	*/
	/*
	int n;
	double x;

	n = 9.99;
	x = 9.99;

	printf("int型变量n的值：%d\n",n);//9
	printf("n/2：%d\n",n / 2);//4

	printf("double型变量x的值：%f\n",x );//9.990000
	printf("x/2.0：%f\n", x / 2.0);//4.995000
	*/

	/*
	读取两个实数值，用实数显示出它们的和、差、积、商
	*/
	/*
	double vx;
	double vy;
	puts("请输入两个数。");
	printf("实数vx：");
	scanf("%lf", &vx);

	printf("实数vy：");
	scanf("%lf", &vy);

	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx - vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);
	*/

	/*
	验证数据类型和运算
	*/

	/*
	int n1, n2, n3, n4;
	double d1, d2, d3, d4;

	n1 = 5 / 2;
	n2 = 5.0 / 2.0;
	n3 = 5.0 / 2;
	n4 = 5 / 2.0;

	d1 = 5 / 2;
	d2 = 5.0 / 2.0;
	d3 = 5.0 / 2;
	d4 = 5 / 2.0;

	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);
	printf("n4 = %d\n", n4);

	printf("d1 = %f\n", d1);
	printf("d2 = %f\n", d2);
	printf("d3 = %f\n", d3);
	printf("d4 = %f\n", d4); 
	*/

	/*
	读取两个整数，并用浮点数显示它们的平均值
	*/
	
	/*
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);

	printf("整数b：");
	scanf("%d", &b);

	//printf("它们的平均值是%f", (a + b) / 2.0);
	printf("它们的平均值是%f。\n", (double)(a + b) / 2);
	*/

	/*
	读取两个整数，计算出前者是后者的百分之几
	*/
	/*
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);

	printf("整数b：");
	scanf("%d", &b);

	printf("a是b的%f%%。", (double)a * 100 / b);
	*/

	/*
	读取三个整数，并显示它们的合计值和平均值
	*/
	/*
	int a, b, c;
	int sum;
	double ave;

	puts("请输入三个整数。");
	printf("整数a：");
	scanf("%d", &a);
	
	printf("整数b：");
	scanf("%d", &b);

	printf("整数c：");
	scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;

	printf("它们的合计值是%5d\n", sum);
	printf("它们的平均值是%5.1f\n", ave); 
	*/

	/*
	格式化整数和浮点数并显示
	*/
	
	/*
	printf("[%d]\n", 123);
	printf("[%.4d]\n", 123);
	printf("[%4d]\n", 123);
	printf("[%04d]\n", 123);
	printf("[%-4d]\n", 123);

	printf("[%d]\n", 12345);
	printf("[%.3d]\n", 12345);
	printf("[%3d]\n", 12345);
	printf("[%03d]\n", 12345);
	printf("[%-3d]\n", 12345);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%6.1f]\n", 123.13);
	printf("[%06.1f]\n", 123.13);
	printf("[%-6.1f]\n", 123.13);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%4.1f]\n", 123.13);
	printf("[%04.1f]\n", 123.13);
	printf("[%-4.1f]\n", 123.13);
	*/

	/*
	读取身高的整数值，计算标准体重的实数值
	*/
	/*
	int height;
	double weight;

	printf("请输入您的身高：");
	scanf("%d", &height);

	weight = (height - 100) * 0.9;

	printf("您的标准体重是%.1f公斤。", weight);
	*/

	/*
	总结
	*/
	
	/*
	int a;
	int b;
	double r;

	printf("整数a和b的值：");
	scanf("%d%d", &a, &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("(a+b)/2=%d\n", (a + b) / 2);
	printf("平均值 = %f\n", (double)(a + b) / 2);

	printf("半径：");
	scanf("%lf", &r);

	printf("半径为%.3f的圆的面积是%.3f。", r, 3.14 * r * r);
	*/

	
	return 0;
}









