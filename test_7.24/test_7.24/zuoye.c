#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��10�����������ֵ
//int main()
//{
//	int arr[10] = {0};//����һ������10������������
//	int max = 0;
//	int i = 0;
//	printf("��д10������:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//
//	max = arr[i];//�����һ��Ԫ��Ϊ���ֵ
//	for (i=1;i<10;i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//			
//	}
//
//	printf("���ֵΪ��%d\n",max);	
//	return 0;
//}


//������ͣ�����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main()
//{
//	int a = 100;
//	double r = 0.0;
//	int sign = 1;
//	int i;
//	for (i=1;i<=a;i++)
//	{
//		r += sign * (1.0/i);
//		sign = -sign;//ÿ���ۼӺ��л�������
//	}
//	printf("���Ϊ��%lf\n",r);
//	return 0;
//}



//��9�ĸ��� һ��19��
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
//	printf(" 1�� 100 �����������г��� %d ����9",count);
//
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
int main()
{
	int i, j;
	printf("100��200֮���������: ");
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