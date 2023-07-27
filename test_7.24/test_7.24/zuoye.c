#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//求10个整数的最大值
//int main()
//{
//	int arr[10] = {0};//定义一个包含10个整数的数组
//	int max = 0;
//	int i = 0;
//	printf("请写10个整数:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	max = arr[i];//假设第一个元素为最大值
//	for (i=1;i<10;i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//			
//	}
//
//	printf("最大值为：%d\n",max);	
//	return 0;
//}


//分数求和：计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//int main()
//{
//	int a = 100;
//	double r = 0.0;
//	int sign = 1;
//	int i;
//	for (i=1;i<=a;i++)
//	{
//		r += sign * (1.0/i);
//		sign = -sign;//每次累加后切换正负号
//	}
//	printf("结果为：%lf\n",r);
//	return 0;
//}



//数9的个数 一共19个
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i=0;i<100;i++)
//	{
//		int num = i;
//		if (num % 10 == 9)
//				count++;
//		if (num / 10 == 9)
//			count++;
//		
//	}
//	count--;
//	printf(" 1到 100 的所有整数中出现 %d 数字9",count);
//
//	return 0;
//}

//写一个代码：打印100~200之间的素数
int main()
{
	int i, j;
	printf("100到200之间的素数是: ");
	for (i = 100;i<=200;i++)
	{
		int sum = 1;
		for (j = 2; j*j <= i; j++)
		{
			
			if(i % j == 0){
				sum = 0;
				break;
			}
				
		}
		if (sum)
			printf("%d ",i);
		

	}
	printf("\n");
	
	return 0;
}