#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//请实现以下三个数组操作的函数：
//1. 请实现GetMaxValOfArray函数，该函数接收一个整形数组，及元素个数，功能求数组中元素最大值并返回
//2. 请实现GetMinValOfArray函数，该函数接收一个整形数组，及元素个数，功能求数组中元素最小值并返回
//3. 请实现函数PrintArray，打印数组中所有元素

//int GetMaxValOfArray(int arr[], int size) {
//    if (size <= 0) {
//        printf("Error: Array size must be greater than 0.\n");
//        return -1; // 返回一个特殊值表示错误
//    }
//
//    int maxVal = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] > maxVal) {
//            maxVal = arr[i];
//        }
//    }
//    return maxVal;
//}
//
//// 获取数组中元素的最小值
//int GetMinValOfArray(int arr[], int size) {
//    if (size <= 0) {
//        printf("Error: Array size must be greater than 0.\n");
//        return -1; // 返回一个特殊值表示错误
//    }
//
//    int minVal = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < minVal) {
//            minVal = arr[i];
//        }
//    }
//    return minVal;
//}
//
//// 打印数组中的所有元素
//void PrintArray(int arr[], int size) {
//    if (size <= 0) {
//        printf("Error: Array size must be greater than 0.\n");
//        return;
//    }
//
//    printf("Array elements: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[] = { 10, 5, 8, 15, 3 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    printf("Array: ");
//    PrintArray(arr, size);
//
//    int maxVal = GetMaxValOfArray(arr, size);
//    printf("Max Value: %d\n", maxVal);
//
//    int minVal = GetMinValOfArray(arr, size);
//    printf("Min Value: %d\n", minVal);
//
//    return 0;
//}

////写⼀个加法函数，完成2个整型变量的加法操作
//int Add(int x, int y)
//{
//	return x + y;
//
//}
//
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	printf("输入两个数");
//	scanf("%d %d",&a,&b);
//	int r = Add(a,b);
//	printf("a和b相加的值为：%d\n",r);
//
//
//	return 0;
//}




////多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
////输出描述：
////针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    // 打印空心正方形图案
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
//                printf("* ");
//            }
//            else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


////输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
////数据范围：1<=n,m<=1000,序列中的值满足0<=ual<=30000
//
//void merge(int arr1[], int n, int arr2[], int m, int merged[]) {
//    int i = 0, j = 0, k = 0;
//
//    while (i < n && j < m) {
//        if (arr1[i] <= arr2[j]) {
//            merged[k++] = arr1[i++];
//        }
//        else {
//            merged[k++] = arr2[j++];
//        }
//    }
//
//    while (i < n) {
//        merged[k++] = arr1[i++];
//    }
//
//    while (j < m) {
//        merged[k++] = arr2[j++];
//    }
//}
//
//int main() {
//    int n, m;
//    printf("请输入两个升序序列的长度n和m（用空格分隔）：");
//    scanf("%d %d", &n, &m);
//
//    int arr1[n], arr2[m];
//    printf("请输入第一个升序序列的%d个整数（用空格分隔）：", n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//
//    printf("请输入第二个升序序列的%d个整数（用空格分隔）：", m);
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    int merged[n + m];
//    merge(arr1, n, arr2, m, merged);
//
//    printf("合并后的升序序列：");
//    for (int i = 0; i < n + m; i++) {
//        printf("%d ", merged[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//


////函数判断素数
////实现一个函数is_prime，判断一个数是不是素数。
////利用上面实现的is_prime函数，打印100到200之间的素数。
//// 素数：一个大于1的自然数，除了1和它本身外，不能被其他自然数（质数）整除
//
//#include <stdbool.h>
//
//bool is_prime(int num) {
//	if (num <= 1) {
//		return false;
//	}
//
//	for (int i = 2; i * i <= num; i++) {
//		if (num % i == 0) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main() {
//
//	printf("100到200之间的素数：\n");
//	for (int num = 100; num <= 200; num++) {
//		if (is_prime(num)) {
//			printf("%d ", num);
//		}
//	}
//
//	printf("\n");
//
//	return 0;
//}




////函数判断闰年
////实现函数判断year是不是闰年。
////润年：4的倍数且不是100的倍数，400的倍数
//#include <stdbool.h>
//bool is_leap_year(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//
//}
//int main() {
//	int year;
//	printf("请输入一个年份:");
//	scanf("%d",&year);
//	if (is_leap_year) {
//		printf("%d年是闰年\n",year);
//
//	}
//	else {
//	
//		printf("%d年不是闰年\n",year);
//	}
//
//	return 0;
//}


////打印100到200间素数
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int i, a, b;
//
//    for (i = 101; i <= 200; i += 2) {
//        for (a = 3; a <= sqrt(i); a++) {
//            for (b = (int)sqrt(i); b <= i; b++) {
//                if (a * b == i) {
//                    break;
//                }
//            }
//            if (b <= i) {
//                break;
//            }
//        }
//        if (a > sqrt(i)) {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}


//8.乘法口诀表
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void multiplication_table(int n) {
//	for (int i = 1; i <= n;i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d * %d = %d\t",i,j,i*j);
//		
//		}
//		printf("\n");
//	}
//
//}
//int main() {
//
//	int num = 0;
//	printf("请输入行数和列数:");
//	scanf("%d",&num);
//	multiplication_table(num);
//
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

#define Array_size 10 // 定义数组大小

// 初始化数组为全0
void init(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

// 打印数组的每个元素
void print(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 数组元素的逆置
void reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int myArray[Array_size];

    // 初始化数组
    init(myArray, Array_size);

    // 打印初始数组
    printf("Initial ");
    print(myArray, Array_size);

    // 修改数组的值
    for (int i = 0; i < Array_size; i++) {
        myArray[i] = i + 1;
    }

    // 打印修改后的数组
    printf("Modified ");
    print(myArray, Array_size);

    // 数组元素逆置
    reverse(myArray, Array_size);

    // 打印逆置后的数组
    printf("Reversed ");
    print(myArray, Array_size);

    return 0;
}


