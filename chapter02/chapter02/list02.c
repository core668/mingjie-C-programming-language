#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{

	/*
	��ȡ����������ֵ��Ȼ����ʾ���ǵĺ͡�������̺�����
	*/

	/*
	int vx;
	int vy;
	puts("����������������");
	printf("����vx��");
	scanf("%d", &vx);

	printf("����vy��");
	scanf("%d", &vy);

	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);
	*/

	/*
	��ʾ��ȡ���������һλ����
	*/

	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	printf("���һλ��%d��\n", no % 10);
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
	��ȡ������������ʾ���ǵ��̺�����
	*/
	/*
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);

	printf("a����b��%d��%d��", a / b, a % b);
	*/

	/*
	��ȡ������������ʾǰ���Ǻ��ߵİٷ�֮��
	*/

	/*
	int x, y;

	puts("����������������");
	printf("����x��");
	scanf("%d", &x);

	printf("����y��");
	scanf("%d", &y);

	printf("x��ֵ��y��%d%%", x * 100 / y );
	*/

	/*
	��ȡ����������������ǵĺͼ���
	*/

	/*
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	
	printf("���ǵĺ���%d������%d", a + b, a * b);
	*/

	/*
	��ȡ������������ʾ���ǵ�ƽ��ֵ
	*/
	/*
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);

	printf("����b��");
	scanf("%d", &b);

	printf("���ǵ�ƽ��ֵ��%d", (a + b) / 2);//42
	*/

	/*
	�����͸�����
	*/
	/*
	int n;
	double x;

	n = 9.99;
	x = 9.99;

	printf("int�ͱ���n��ֵ��%d\n",n);//9
	printf("n/2��%d\n",n / 2);//4

	printf("double�ͱ���x��ֵ��%f\n",x );//9.990000
	printf("x/2.0��%f\n", x / 2.0);//4.995000
	*/

	/*
	��ȡ����ʵ��ֵ����ʵ����ʾ�����ǵĺ͡��������
	*/
	/*
	double vx;
	double vy;
	puts("��������������");
	printf("ʵ��vx��");
	scanf("%lf", &vx);

	printf("ʵ��vy��");
	scanf("%lf", &vy);

	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx - vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);
	*/

	/*
	��֤�������ͺ�����
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
	��ȡ�������������ø�������ʾ���ǵ�ƽ��ֵ
	*/
	
	/*
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);

	printf("����b��");
	scanf("%d", &b);

	//printf("���ǵ�ƽ��ֵ��%f", (a + b) / 2.0);
	printf("���ǵ�ƽ��ֵ��%f��\n", (double)(a + b) / 2);
	*/

	/*
	��ȡ���������������ǰ���Ǻ��ߵİٷ�֮��
	*/
	/*
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);

	printf("����b��");
	scanf("%d", &b);

	printf("a��b��%f%%��", (double)a * 100 / b);
	*/

	/*
	��ȡ��������������ʾ���ǵĺϼ�ֵ��ƽ��ֵ
	*/
	/*
	int a, b, c;
	int sum;
	double ave;

	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	
	printf("����b��");
	scanf("%d", &b);

	printf("����c��");
	scanf("%d", &c);

	sum = a + b + c;
	ave = (double)sum / 3;

	printf("���ǵĺϼ�ֵ��%5d\n", sum);
	printf("���ǵ�ƽ��ֵ��%5.1f\n", ave); 
	*/

	/*
	��ʽ�������͸���������ʾ
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
	��ȡ��ߵ�����ֵ�������׼���ص�ʵ��ֵ
	*/
	/*
	int height;
	double weight;

	printf("������������ߣ�");
	scanf("%d", &height);

	weight = (height - 100) * 0.9;

	printf("���ı�׼������%.1f���", weight);
	*/

	/*
	�ܽ�
	*/
	
	/*
	int a;
	int b;
	double r;

	printf("����a��b��ֵ��");
	scanf("%d%d", &a, &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("(a+b)/2=%d\n", (a + b) / 2);
	printf("ƽ��ֵ = %f\n", (double)(a + b) / 2);

	printf("�뾶��");
	scanf("%lf", &r);

	printf("�뾶Ϊ%.3f��Բ�������%.3f��", r, 3.14 * r * r);
	*/

	
	return 0;
}









