#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
////��
////��дһ������void StatCharCount(char str[])��
////�ú�������һ���ַ�����Ϊ��������ͳ�Ƹ��ַ�������ĸ�����֡��ո�������ַ��ĸ�����
////��main�������øú������ֱ��ӡ��ĸ�����֡��ո� �� �����ַ��ĳ��ִ�����
////������ʾ��һ������ֻ�ܷ���һ��ֵ���˴���ͳ�ƽ����4������˷��ؽ������ʹ��ȫ�ֱ�����������
//
//int letterCount = 0;//��ĸ
//int digitCount = 0;//����
//int spaceCount = 0;//�ո�
//int otherCount = 0;//����
//
//void StatCharCount(char str[]) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        // �ж��ַ�����
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
//	printf("������һ���ַ���");
//	gets(inputStr);
//
//	StatCharCount(inputStr);
//	printf("��ĸ:%d ����:%d �ո�:%d ����:%d", letterCount, digitCount, spaceCount, otherCount);
//
//	return 0;
//}