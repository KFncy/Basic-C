#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���ӷ�ֳ���⣺
//�ٶ�һ�Դ�����ÿ������һ��С���ӣ���ÿ��������С���Ӿ���һ���¿��Գ���һ�Դ�����, �߱���ֳ������
//�����������������ÿ�ξ�����һ��һ�ۣ���һ����ж��ٶ����ӣ�

//int calRabbits(int months) {
//	if (months < 3) {
//		return 1;
//	
//	}
//	else {
//		return calRabbits(months - 1) + calRabbits(months-2);
//	
//	}
//}
//int main() {
//	int months = 12;
//	int total = calRabbits(months);
//	printf("һ����� %d ������", total);
//
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//�ݹ�ʵ��

//int FibRecursion(int n) {
//	if (n <= 1) {
//		return n;
//	}
//	return FibRecursion(n - 1) + FibRecursion(n - 2);
//}
//
////�ǵݹ�ʵ��쳲�������
//
//int FibNonecursive(int n) {
//	if (n<=1) {
//		return n;
//	}
//	int a = 0;
//	int current = 1;
//	int next=0;
//
//	for (int i = 2; i <= n;i++) {
//		next = a + current;
//		a = current;
//		current = next;	
//	}
//	return current;
//}
//int main() {
//	int n = 0;
//	printf("���룺");
//	scanf("%d",&n);
//	printf("�ݹ������%d\n", FibRecursion(n));
//	printf("�ǵݹ������%d\n", FibNonecursive(n));
//	return 0;
//}

////��дһ������ʵ��n��k�η� �õݹ�ʵ��
//
//double IndexRecursive(double n, int k){
//	if (k==0) {
//		return 1;
//	}
//	else if (k>0) {
//	
//		return n * IndexRecursive(n, k - 1);
//	}else
//		return 1.0 / IndexRecursive(n, -k);
//	
//}
//int main() {
//	double n;
//	int k;
//
//	printf("����n��");
//	scanf("%lf",&n);
//
//	printf("����k��");
//	scanf("%d",&k);
//	double result = IndexRecursive(n, k);
//
//	printf("%.2lf^%d = %.2lf\n", n, k, result);
//
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//int DigitSum(int n) {
//	if (n == 0)
//		return 0;
//	else
//		return n % 10 + DigitSum(n / 10);
//
//}
//int main() {
//	int n;
//	printf("����һ���Ǹ�������");
//	scanf("%d",&n);
//
//	int sum = DigitSum(n);
//	printf("�����%d\n",sum);
//
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

////�ݹ�ʵ��
//unsigned long long FactorialRecursive(int n) {
//	if (n == 0 || n == 1)
//		return 1;
//	return n * FactorialRecursive(n - 1);
//}
//
////�ǵݹ�ʵ��
//unsigned long long FactorialNonecursive(int n) {
//	unsigned long long result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= i;
//	}
//	return result;
//}
//
//int main() {
//	int n;
//	
//	printf("���룺");
//	scanf("%d",&n);
//
//	printf("%d! = %llu\n", n, FactorialRecursive(n));
//	printf("%d! = %llu\n", n, FactorialNonecursive(n));
//
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void PrintDigits(int n){
	if (n == 0) 
		return;

	int lastDigit = n % 10;
	PrintDigits(n / 10);

	printf("%d ", lastDigit);
}


int main() {
	int n;
	printf("���룺");
	scanf("%d",&n);

	printf("������ÿһλ: ");
	PrintDigits(n);
	printf("\n");

	return 0;
}