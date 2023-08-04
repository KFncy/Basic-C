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

//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

//int main() {
//	int money = 20;//金额
//	int drinktotal = money;//喝掉的汽水
//	int bottles = money;//空瓶数
//
//	while (bottles>=2) {
//		int exchange = bottles / 2; //可以换的汽水瓶数
//		drinktotal += exchange;//加上这次换的
//		bottles= exchange+bottles % 2;
//
//	}
//	printf("可以喝 %d 瓶汽水", drinktotal);
//	return 0;
//}



//打印菱形

//int main() {
//    int height = 0;
//    printf("输入菱形的高：");
//    scanf("%d",&height);
//    int spaces, stars;
//
//    // 打印上半部分
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
//    // 打印下半部分
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


//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//#include <math.h>
//
//// 判断一个数是否是水仙花数
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
//    // 计算每个位上数字的n次幂之和
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
//    printf("在0～100000之间的水仙花数有：\n");
//
//    for (int i = 0; i <= 100000; i++) {
//        if (isDaffodil(i)) {
//            printf("%d\n", i);
//        }
//    }
//
//    return 0;
//}



//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
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
	printf("请输入a：");
	scanf("%d",&a);

	int r = AddSum(a);
	printf("Sn=%d\n",r);

	return 0;
}


//int main() {
//    int a;
//    printf("请输入数字a：");
//    scanf("%d", &a);
//
//    int sum = 0;
//    int term = 0;
//    for (int i = 1; i <= 5; i++) {
//        term = term * 10 + a;
//        sum += term;
//    }
//
//    printf("前5项之和为：%d\n", sum);
//
//    return 0;
//}
