#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main(void)
{
	/*
	����������ܱ�5������
	*/
	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	if (no % 5)
		puts("������������ܱ�5������");
	*/

	/*
	�����������������
	*/
	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	if (no % 2)
		puts("�����������������");
	*/

	/*
	����������ܱ�5�����𣿸Ľ���
	*/
	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	if (no % 5)
		puts("������������ܱ�5������");
	else
		puts("����������ܱ�5������");
	*/

	/*
	�������������������ż����
	*/
	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	if (no % 2)
		puts("�����������������");
	else
		puts("��������ż����");
	*/

	/*
	���������������жϺ����Ƿ���ǰ�ߵ�Լ����a���������ܱ�b��Լ��������
	*/
	/*
	int A, B;
	puts("����������������");

	printf("����A��");
	scanf("%d", &A);

	printf("����B��");
	scanf("%d", &B);

	if (A % B)
		puts("B����A��Լ��");
	else
		puts("B��A��Լ��");
	*/

	/*
	���������ֵ�Ƿ�Ϊ0
	*/
	/*
	int num;

	printf("������һ��������");
	scanf("%d", &num);

	if (num)
		puts("��������Ϊ0");
	else
		puts("������Ϊ0");
	*/

	/*
	������������������
	*/
	/*
	int n1, n2;

	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	if (n1 == n2)
		puts("������ȡ�");
	else
		puts("���ǲ����");
	*/

	/*
	��������������������
	*/
	/*
	int n1, n2;

	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	if (n1 != n2)
		puts("���ǲ���ȡ�");
	else
		puts("�������");
	*/

	/*
	��λ����5��
	*/
	/*
	int num;

	printf("������һ��������");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("�������ĸ�λ����5��");
	else
		puts("�������ĸ�λ������5��");
	*/

	/*
	�ж�����������ķ���
	*/
	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	if (no == 0)
		puts("������Ϊ0");
	else if (no > 0)
		puts("������Ϊ����");
	else
		puts("������Ϊ����");		
	*/

	/*
	�ж�����������ķ��ţ�������else�ĳ�elseif(n<0)
	*/
	/*
	int no;
	printf("������һ��������");
	scanf("%d", &no);

	if (no == 0)
		puts("������Ϊ0");
	else if (no > 0)
		puts("������Ϊ����");
	else if (no < 0)
		puts("������Ϊ����");
	*/

	/*
	����һ����������ʾ���ľ���ֵ
	*/
	
	/*int num;
	printf("������һ��������");
	scanf("%d", &num);

	if(num>=0)
		printf("����ֵ��%d\n", num);
	else
		printf("����ֵ��%d\n", -num);*/

	/*
	�ж����������Ĵ�С
	*/
	/*int A, B;
	puts("����������������");

	printf("����A��");
	scanf("%d", &A);

	printf("����B��");
	scanf("%d", &B);

	if (A == B)
		puts("A��B���");
	else
		if (A > B)
			puts("A����B");
		else
			puts("AС��B");*/

	/*
	����������ֵΪ�������жϸ�ֵ����ż�Բ���ʾ
	*/
	/*int num;

	printf("������һ��������");
	scanf("%d", &num);

	if (num > 0)
		if (num % 2 == 0)
			puts("������Ϊż����");
		else
			puts("������Ϊ������");
	else
		puts("������Ĳ���������\a\n");*/

	/*
	���������͹�ϵ���������������1��0
	*/
	/*
	int n = 51;
	printf("%d\n", n > 0);//1
	printf("%d\n", n == 0);//0
	*/

	 /*
	 ����������������ʾ�����нϴ��ֵ
	 */
	/*
	int n1, n2;
	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	if (n1 > n2)
		printf("�ϴ������%d��\n", n1);
	else
		printf("�ϴ������%d��\n", n2);
	*/
	
	/*
	 ����������������ʾ�����нϴ��ֵ�Ľ���
	 */	 
	 /*int n1, n2, max;
	 puts("����������������");

	 printf("����1��");
	 scanf("%d", &n1);

	 printf("����2��");
	 scanf("%d", &n2);

	 if (n1 > n2)
		 max = n1;
	 else
		 max = n2;
	 printf("�ϴ������%d��\n", max);*/
	
	/*
	��������������������е����ֵ����ʾ
	*/
	/*
	int n1, n2, n3, max;
	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);
		 
	printf("����2��");
	scanf("%d", &n2);

	printf("����3��");
	scanf("%d", &n3);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;

	printf("���ֵ��%d", max);
	*/
	
	/*
	 ����������������ʾ�����нϴ��ֵ ���������
	 */
	 /*int n1, n2, max;
	 puts("����������������");

	 printf("����1��");
	 scanf("%d", &n1);

	 printf("����2��");
	 scanf("%d", &n2);

	 max = (n1 > n2) ? n1 : n2;

	 printf("�ϴ������%d��\n", max);*/

	/*
	������������������Ĳ��ʾ ���������
	*/
	/*int n1, n2;
	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	printf("���ǵĲ���%d", (n1 > n2) ? n1 - n2 : n2 - n1);*/

	/*
	��������������������е���Сֵ����ʾ
	*/
	
	/*int n1, n2, n3, min;
	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	printf("����3��");
	scanf("%d", &n3);

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	printf("��Сֵ��%d", min);*/

	/*
	������������ĸ������е����ֵ����ʾ
	*/
	
	/*int n1, n2, n3, n4, max;
	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	printf("����3��");
	scanf("%d", &n3);

	printf("����4��");
	scanf("%d", &n4);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;

	printf("���ֵ��%d", max);
	*/

	/*
	������������������Ĳ��ʾ if���
	*/
	/*int n1, n2;
	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	if (n1 > n2)
		printf("���ǵĲ���%d", n1 - n2);
	else
		printf("���ǵĲ���%d", n2 - n1);*/

	
	/*
	������������������ ���������
	*/
	
	/*int n1, n2;

	puts("����������������");

	printf("����1��");
	scanf("%d", &n1);

	printf("����2��");
	scanf("%d", &n2);

	printf((n1 == n2) ? "������ȡ�" : "���ǲ����");*/

	
	
	









	return 0;
}




