#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////����������������(Ҫ�����ǰ10��)
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
//    // ��ʼ����һ�кͶԽ����ϵ�Ԫ��Ϊ1
//    for (int i = 0; i < ROWS; i++) {
//        triangle[i][0] = 1;
//        triangle[i][i] = 1;
//    }
//
//    // ������������е�����Ԫ��
//    for (int i = 2; i < ROWS; i++) {
//        for (int j = 1; j < i; j++) {
//            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//        }
//    }
//
//    // ��ӡ�������
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%-4d", triangle[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//��дһ�����򣬴��û������ж�ȡ10���������洢��һ��������
//���㲢�����Щ������ƽ��ֵ��

//#define Array_size 10 // ���������С
//
//int main() {
//	int myArray[Array_size];
//	int sum = 0;
//
//	//��ȡ���������
//	printf("������%d������:\n", Array_size);
//	for (int i = 0; i < Array_size; i++) {
//		scanf("%d", &myArray[i]);
//	}
//	//�����������ܺ�
//	for (int i = 0; i < Array_size;i++) {
//		sum += myArray[i];
//
//	}
//	//����ƽ��ֵ
//	float average = (float)sum / Array_size;
//	printf("%d��������ƽ��ֵΪ��%2.f\n", Array_size, average);
//
//	return 0;
//}


////��ӡ1000�굽2000��֮�������
//
//int main() {
//  
//    printf("1000�굽2000��֮������꣺\n");
//    int count = 0;
//    for (int year = 1000; year <= 2000; year++) {
//        // �ж��Ƿ�Ϊ����Ĺ���
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\n��1000�굽2000��֮���������%d��\n",count);
//
//    return 0;
//}



////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//
//// ���彻������
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
//    // ���ý�������
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


//���������������������������Լ��
//���磺
//���룺20 40
//�����20

////���Լ����������ӣ�ָ����������������Լ��������һ��
//
//int main() {
//	int num1, num2;
//	printf("����������\n");
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
//	printf("���Լ��:%d",result);
//
//	return 0;
//}


////��������Ϸ
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    int targetNumber, guess, attempts = 0;
//    int lowerBound, upperBound;
//
//    // �������������
//    srand(time(0));
//
//    printf("��ӭ������������Ϸ��\n");
//    printf("���������ַ�Χ���½磺");
//    scanf("%d", &lowerBound);
//    printf("���������ַ�Χ���Ͻ磺");
//    scanf("%d", &upperBound);
//
//    // ����Ŀ������
//    targetNumber = lowerBound + rand() % (upperBound - lowerBound + 1);
//
//    printf("��Ϸ��ʼ��������һ����%d��%d֮���������", lowerBound, upperBound);
//
//    // ��Ϸ��ѭ��
//    while (1) {
//        scanf("%d", &guess);
//        attempts++;
//
//        if (guess == targetNumber) {
//            printf("��ϲ��¶��ˣ�Ŀ�������ǣ�%d\n", targetNumber);
//            printf("���ܹ�����%d�Ρ�\n", attempts);
//            break;
//        }
//        else if (guess < targetNumber) {
//            printf("�µ�����̫С�ˣ�������£�");
//        }
//        else {
//            printf("�µ�����̫���ˣ�������£�");
//        }
//    }
//
//    return 0;
//}



//��������Ϸ
#include <stdlib.h>
#include <time.h>

int get_guess_input() {
    int guess;
    while (1) {
        printf("�������>:");
        if (scanf("%d", &guess) != 1) {
            while (getchar() != '\n');
            printf("������Ч��������һ����Ч��������\n");
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
            printf("��С��\n");
        }
        else if (guess > r) {
            printf("�´���\n");
        }
        else {
            printf("��ϲ�㣬�¶��ˣ�Ŀ�������ǣ�%d\n", r);
            printf("���ܹ�����%d�Ρ�\n", attempts);
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
        printf("��ѡ��:>");
        scanf("%d", &input);

        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("��Ϸ����\n");
            break;
        default:
            printf("ѡ�����������ѡ��\n");
            break;
        }

    } while (input != 0);

    return 0;
}
