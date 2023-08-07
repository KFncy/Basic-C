#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//兔子繁殖问题：
//假定一对大兔子每月能生一对小兔子，且每对新生的小兔子经过一个月可以长成一对大兔子, 具备繁殖能力，
//如果不发生死亡，且每次均生下一雌一雄，问一年后共有多少对兔子？

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
//	printf("一年后共有 %d 对兔子", total);
//
//}


//递归和非递归分别实现求第n个斐波那契数

//递归实现

//int FibRecursion(int n) {
//	if (n <= 1) {
//		return n;
//	}
//	return FibRecursion(n - 1) + FibRecursion(n - 2);
//}
//
////非递归实现斐波那契数
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
//	printf("输入：");
//	scanf("%d",&n);
//	printf("递归输出：%d\n", FibRecursion(n));
//	printf("非递归输出：%d\n", FibNonecursive(n));
//	return 0;
//}

////编写一个函数实现n的k次方 用递归实现
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
//	printf("输入n：");
//	scanf("%lf",&n);
//
//	printf("输入k：");
//	scanf("%d",&k);
//	double result = IndexRecursive(n, k);
//
//	printf("%.2lf^%d = %.2lf\n", n, k, result);
//
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int n) {
//	if (n == 0)
//		return 0;
//	else
//		return n % 10 + DigitSum(n / 10);
//
//}
//int main() {
//	int n;
//	printf("输入一个非负整数：");
//	scanf("%d",&n);
//
//	int sum = DigitSum(n);
//	printf("输出：%d\n",sum);
//
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

////递归实现
//unsigned long long FactorialRecursive(int n) {
//	if (n == 0 || n == 1)
//		return 1;
//	return n * FactorialRecursive(n - 1);
//}
//
////非递归实现
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
//	printf("输入：");
//	scanf("%d",&n);
//
//	printf("%d! = %llu\n", n, FactorialRecursive(n));
//	printf("%d! = %llu\n", n, FactorialNonecursive(n));
//
//	return 0;
//}


//递归方式实现打印一个整数的每一位

void PrintDigits(int n){
	if (n == 0) 
		return;

	int lastDigit = n % 10;
	PrintDigits(n / 10);

	printf("%d ", lastDigit);
}


int main() {
	int n;
	printf("输入：");
	scanf("%d",&n);

	printf("整数的每一位: ");
	PrintDigits(n);
	printf("\n");

	return 0;
}