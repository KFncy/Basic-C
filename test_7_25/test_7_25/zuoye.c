#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//ˮ�ɻ��� 153 = 1 + 5^3 + 3^3
	int num, sum, d;
	int t;
	int s;
	num = 3;
	int temp = 100;
	for (int i = temp; i < temp * 10; i++)
	{
		t = i;
		sum = 0;
		while (t > 0)
		{
			s = 1;
			d = t % 10;
			t /= 10;
			for (int j = 0; j < num; j++)//num=3 
			{
				s *= d;//���η� 
			}
			sum += s;

		}

		if (sum == i)//�ж��Ƿ����ˮ�ɻ������� 
		{
			printf("%d\n", i);
		}
	}



	return 0;
}


