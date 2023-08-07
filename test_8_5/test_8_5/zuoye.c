#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int x = 12;
//	int y = 5;
//	printf("%d\n",x & y);
//
//}

//int main()
//{
//	int num1 = -3;
//	int num2 = 5;
//	num1& num2;
//	num1 | num2;
//	num1^ num2;
//	num1^ num2;
//	printf("%d\n",num1 & num2);
//	printf("%d\n",num1 | num2);
//	printf("%d\n",num1 ^ num2);
//	return 0;
//}

//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("⼆进制中1的个数 = %d\n", count);
//	return 0;
//}


//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//例如：
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

//int findSingleNumber(int arr[], int sz) {
//    int result = 0;
//
//    for (int i = 0; i < sz; i++) {
//        result ^= arr[i];
//    }
//
//    return result;
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int singleNumber = findSingleNumber(arr, sz);
//	printf("这里面的单身狗是：%d\n", singleNumber);
//
//	return 0;
//}



//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//数据范围：-21^31 <= n <= 2^31-1
// 即范围为:-2147483648 <= n <= 2147483647

//int NumberOf1(int n) {
//    // write code here
//    int count = 0;
//
//    // 对于负数，先用使用移位操作，先将其转换为补码表示
//    // 然后统计补码表示中的1的个数
//    unsigned int num = (unsigned int)n;
//
//    while (num != 0) {
//        count += num & 1; // 判断最低位是否为1
//        num >>= 1; // 向右移一位
//    }
//
//    return count;
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int onesCount = NumberOf1(n);
//    printf("%d\n", onesCount);
//
//    return 0;
//}


//交换两个变量（不创建临时变量）

int main() {
	int a;
	int b;
	printf("请分别输入a,b的值:");
	scanf("%d %d",&a,&b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n",a,b);
	return 0;

}