#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ

//int main() {
//	int money = 20;//���
//	int drinktotal = money;//�ȵ�����ˮ
//	int bottles = money;//��ƿ��
//
//	while (bottles>=2) {
//		int exchange = bottles / 2; //���Ի�����ˮƿ��
//		drinktotal += exchange;//������λ���
//		bottles= exchange+bottles % 2;
//
//	}
//	printf("���Ժ� %d ƿ��ˮ", drinktotal);
//	return 0;
//}



//��ӡ����

//int main() {
//    int height = 0;
//    printf("�������εĸߣ�");
//    scanf("%d",&height);
//    int spaces, stars;
//
//    // ��ӡ�ϰ벿��
//    for (int i = 1; i <= height; i += 2) {
//        spaces = (height - i) / 2;
//        stars = i;
//        for (int j = 1; j <= spaces; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= stars; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // ��ӡ�°벿��
//    for (int i = height - 2; i >= 1; i -= 2) {
//        spaces = (height - i) / 2;
//        stars = i;
//        for (int j = 1; j <= spaces; j++) {
//            printf(" ");
//        }
//        for (int j = 1; j <= stars; j++) {
//            printf("*"); 
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//#include <math.h>
//
//// �ж�һ�����Ƿ���ˮ�ɻ���
//int isDaffodil(int num) {
//    int n = num;
//    int sum = 0;
//    int digits = 0;
//
//    while (n > 0) {
//        n /= 10;
//        digits++;
//    }
//
//    n = num;
//    // ����ÿ��λ�����ֵ�n����֮��
//    while (n > 0) {
//        int digit = n % 10;
//        sum += pow(digit, digits);
//        n /= 10;
//    }
//
//    return sum == num;
//}
//
//int main() {
//    printf("��0��100000֮���ˮ�ɻ����У�\n");
//
//    for (int i = 0; i <= 100000; i++) {
//        if (isDaffodil(i)) {
//            printf("%d\n", i);
//        }
//    }
//
//    return 0;
//}



//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
int AddSum(int a) {
	int sum = 0;
	int item = 0;
	for (int i = 1; i <= 5; i++) {
		item = item * 10 + a; 
		sum += item; 
	}

	return sum;
}

int main() {
	int a = 0;
	printf("������a��");
	scanf("%d",&a);

	int r = AddSum(a);
	printf("Sn=%d\n",r);

	return 0;
}


//int main() {
//    int a;
//    printf("����������a��");
//    scanf("%d", &a);
//
//    int sum = 0;
//    int term = 0;
//    for (int i = 1; i <= 5; i++) {
//        term = term * 10 + a;
//        sum += term;
//    }
//
//    printf("ǰ5��֮��Ϊ��%d\n", sum);
//
//    return 0;
//}
