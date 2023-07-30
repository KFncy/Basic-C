#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////请输出以下杨辉三角(要求输出前10行)
////1
////1    1
////1    2    1
////1    3    3    1
////1    4    6    4    1
////1    5    10  10   5   1
////...
//#define ROWS 10
//
//
//int main() {
//    int triangle[ROWS][ROWS];
//
//    // 初始化第一列和对角线上的元素为1
//    for (int i = 0; i < ROWS; i++) {
//        triangle[i][0] = 1;
//        triangle[i][i] = 1;
//    }
//
//    // 计算杨辉三角中的其他元素
//    for (int i = 2; i < ROWS; i++) {
//        for (int j = 1; j < i; j++) {
//            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//        }
//    }
//
//    // 打印杨辉三角
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%-4d", triangle[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//编写一个程序，从用户输入中读取10个整数并存储在一个数组中
//计算并输出这些整数的平均值。

//#define Array_size 10 // 定义数组大小
//
//int main() {
//	int myArray[Array_size];
//	int sum = 0;
//
//	//读取输入的整数
//	printf("请输入%d个整数:\n", Array_size);
//	for (int i = 0; i < Array_size; i++) {
//		scanf("%d", &myArray[i]);
//	}
//	//计算整数的总和
//	for (int i = 0; i < Array_size;i++) {
//		sum += myArray[i];
//
//	}
//	//计算平均值
//	float average = (float)sum / Array_size;
//	printf("%d个整数的平均值为：%2.f\n", Array_size, average);
//
//	return 0;
//}


////打印1000年到2000年之间的闰年
//
//int main() {
//  
//    printf("1000年到2000年之间的闰年：\n");
//    int count = 0;
//    for (int year = 1000; year <= 2000; year++) {
//        // 判断是否为闰年的规则
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\n从1000年到2000年之间的闰年有%d个\n",count);
//
//    return 0;
//}



////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//// 定义交换函数
//void swapArrays(int arr_a[], int arr_b[], int size) {
//    for (int i = 0; i < size; i++) {
//        int temp = arr_a[i];
//        arr_a[i] = arr_b[i];
//        arr_b[i] = temp;
//    }
//}
//
//int main() {
//    int array_a[] = { 1, 2, 3, 4 };
//    int array_b[] = { 5, 6, 7, 8 };
//    int size = sizeof(array_a) / sizeof(array_a[0]);
//
//    printf("Before swapping:\n");
//    printf("Array A: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", array_a[i]);
//    }
//    printf("\n");
//
//    printf("Array B: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", array_b[i]);
//    }
//    printf("\n");
//
//    // 调用交换函数
//    swapArrays(array_a, array_b, size);
//
//    printf("\nAfter swapping:\n");
//    printf("Array A: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", array_a[i]);
//    }
//    printf("\n");
//
//    printf("Array B: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", array_b[i]);
//    }
//    printf("\n");
//
//    return 0;
//}


//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20

////最大公约数：最大公因子，指两个或多个整数共有约数中最大的一个
//
//int main() {
//	int num1, num2;
//	printf("输入两个数\n");
//	scanf("%d %d",&num1,&num2);
//	int result = 0;
//	for (int i = 1; i <= num1 && i <= num2; i++) {
//		if (num1 % i == 0 && num2 % i == 0) {
//			result = i;
//		
//		
//		}
//	
//	}
//	
//	printf("最大公约数:%d",result);
//
//	return 0;
//}


////猜数字游戏
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    int targetNumber, guess, attempts = 0;
//    int lowerBound, upperBound;
//
//    // 设置随机数种子
//    srand(time(0));
//
//    printf("欢迎来到猜数字游戏！\n");
//    printf("请输入数字范围的下界：");
//    scanf("%d", &lowerBound);
//    printf("请输入数字范围的上界：");
//    scanf("%d", &upperBound);
//
//    // 生成目标数字
//    targetNumber = lowerBound + rand() % (upperBound - lowerBound + 1);
//
//    printf("游戏开始！请输入一个在%d到%d之间的整数：", lowerBound, upperBound);
//
//    // 游戏主循环
//    while (1) {
//        scanf("%d", &guess);
//        attempts++;
//
//        if (guess == targetNumber) {
//            printf("恭喜你猜对了！目标数字是：%d\n", targetNumber);
//            printf("你总共猜了%d次。\n", attempts);
//            break;
//        }
//        else if (guess < targetNumber) {
//            printf("猜的数字太小了，请继续猜：");
//        }
//        else {
//            printf("猜的数字太大了，请继续猜：");
//        }
//    }
//
//    return 0;
//}



//猜数字游戏
#include <stdlib.h>
#include <time.h>

int get_guess_input() {
    int guess;
    while (1) {
        printf("请猜数字>:");
        if (scanf("%d", &guess) != 1) {
            while (getchar() != '\n');
            printf("输入无效，请输入一个有效的整数。\n");
        }
        else {
            break;
        }
    }
    return guess;
}

void game() {
    int r = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    while (1) {
        guess = get_guess_input();
        attempts++;

        if (guess < r) {
            printf("猜小了\n");
        }
        else if (guess > r) {
            printf("猜大了\n");
        }
        else {
            printf("恭喜你，猜对了！目标数字是：%d\n", r);
            printf("你总共猜了%d次。\n", attempts);
            break;
        }
    }
}

void menu() {
    printf("***********************\n");
    printf("****** 1. play ******\n");
    printf("****** 0. exit ******\n");
    printf("***********************\n");
}

int main() {
    int input = 0;
    srand((unsigned int)time(NULL));

    do {
        menu();
        printf("请选择:>");
        scanf("%d", &input);

        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束\n");
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }

    } while (input != 0);

    return 0;
}
