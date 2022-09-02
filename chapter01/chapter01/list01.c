#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	
	//计算整数15和37的和
	//printf("%d", 15 + 37);//52
	//计算整数15和37的差
	//printf("%d", 15 - 37);//-22
	//人性化显示
	//printf("15与37的和是%d。\n", 15 + 37);
	//练习题1-1
	//printf("15减去37的结果是%d。\n", 15 - 37);
	//打招呼进行自我介绍
	//printf("您好！我叫周睿。\n");
	//printf("您好！\n我叫周睿。\n");
	//printf("您好！\n");
	//printf("我叫周睿。\n");
	//printf("您好！\a\n");
	//练习1-2
	//printf("天\n");
	//printf("地\n");
	//printf("人\n");
	//联系1-3
	//printf("喂！\n\n");
	//printf("您好！\n");
	//printf("再见。\n");
	/*
	int vx;
	int vy;
	vx = 57;
	vy = vx + 10;
	printf("vx的值是%d\n",vx);//vx的值是57
	printf("vy的值是%d\n", vy);//vy的值是67 
	*/
	//int pai = 5.7;
	//printf("pai的值是%d\n",pai);
	/*
	* int no;
	printf("请输入一个整数：");
	scanf("%d", &no);
	//printf("您输入的是%d。\n", no);
	//printf("它的5倍数是%d。\n", 5 * no);
	printf("该整数加上12的结果是%d。\n", no + 12);
	printf("该整数减去6的结果是%d。\n", no - 6);
	*/

	/*
	int n1, n2;
	int wa;
	puts("请输入两个整数。");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2：");
	scanf("%d", &n2);
	
	wa = n1 + n2;
	printf("他们的和是%d\n", wa);

	//printf("他们的和是%d\n", n1 + n2);
	*/

	puts("天");
	puts("地");
	puts("人");

	/*
	int n1, n2;
	int wa;
	puts("请输入两个整数。");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2：");
	scanf("%d", &n2);
	wa = n1 * n2;
	printf("它们的乘积是%d\n", wa);
	*/

	/*
	int n1, n2, n3;
	int wa;
	puts("请输入三个整数。");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2：");
	scanf("%d", &n2);
	printf("整数3：");
	scanf("%d", &n3);
	wa = n1 + n2 + n3;
	printf("它们的和是%d\n", wa);
	*/

	int length;
	int width; 

	puts("求长方形的面积。");
	printf("长：");
	scanf("%d", &length);

	printf("宽：");
	scanf("%d", &width);

	printf("面积是%d。\n", length * width);


	return 0;
}