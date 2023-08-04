#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
////打卡
////编写一个函数void StatCharCount(char str[])，
////该函数接收一个字符串作为参数，请统计该字符串中字母、数字、空格和其他字符的个数，
////在main函数调用该函数，分别打印字母、数字、空格 和 其他字符的出现次数。
////返回提示：一个函数只能返回一个值，此处的统计结果有4个，因此返回结果可以使用全局变量带出来。
//
//int letterCount = 0;//字母
//int digitCount = 0;//数字
//int spaceCount = 0;//空格
//int otherCount = 0;//其他
//
//void StatCharCount(char str[]) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        // 判断字符类型
//        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//            letterCount++;
//        }
//        else if (str[i] >= '0' && str[i] <= '9') {
//            digitCount++;
//        }
//        else if (str[i] == ' ') {
//            spaceCount++;
//        }
//        else {
//            otherCount++;
//        }
//    }
//}
//
//int main() {
//	char inputStr[200];
//
//	printf("请输入一个字符串");
//	gets(inputStr);
//
//	StatCharCount(inputStr);
//	printf("字母:%d 数字:%d 空格:%d 其他:%d", letterCount, digitCount, spaceCount, otherCount);
//
//	return 0;
//}