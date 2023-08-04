#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ֲ���


//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int key = 7; // Ҫ�ҵ�Ԫ��
//    int mid = 0; // �洢�м�Ԫ�ص�����
//    int found = 0; // �Ƿ��ҵ���Ԫ��
//
//    while (left <= right) {
//        mid = left + (right - left) / 2;
//
//        if (arr[mid] == key) {
//            found = 1;
//            break;
//        }
//        else if (arr[mid] > key) {
//            right = mid - 1;
//        }
//        else {
//            left = mid + 1;
//        }
//    }
//
//    if (found) {
//        printf("�ҵ��ˣ��±���%d\n", mid);
//    }
//    else {
//        printf("�Ҳ���\n");
//    }
//
//    return 0;
//}


//ɨ����Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 9
#define COLS 9
#define MINES 10

char board[ROWS][COLS];
char mineBoard[ROWS][COLS];
int uncovered[ROWS][COLS];

void initialize() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = '*';
            mineBoard[i][j] = ' ';
            uncovered[i][j] = 0;
        }
    }
}

void placeMines() {
    int count = 0;
    while (count < MINES) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (mineBoard[row][col] == ' ') {
            mineBoard[row][col] = '*';
            count++;
        }
    }
}

int countAdjacentMines(int row, int col) {
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < ROWS && j >= 0 && j < COLS && mineBoard[i][j] == '*') {
                count++;
            }
        }
    }
    return count;
}

void uncoverCell(int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS || uncovered[row][col])
        return;

    uncovered[row][col] = 1;

    if (mineBoard[row][col] != ' ') {
        board[row][col] = '0' + countAdjacentMines(row, col);
    }
    else {
        for (int i = row - 1; i <= row + 1; i++) {
            for (int j = col - 1; j <= col + 1; j++) {
                uncoverCell(i, j);
            }
        }
    }
}

void printBoard() {
    printf("\n   ");
    for (int j = 0; j < COLS; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < ROWS; i++) {
        printf("%d  ", i);
        for (int j = 0; j < COLS; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int isGameWon() {
    int uncoveredCount = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (uncovered[i][j]) {
                uncoveredCount++;
            }
        }
    }
    return (uncoveredCount == ROWS * COLS - MINES);
}

void revealMines() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mineBoard[i][j] == '*') {
                board[i][j] = '*';
            }
        }
    }
}

int main() {
    srand(time(0));
    initialize();
    placeMines();

    int row, col;
    int gameOver = 0;

    printf("Welcome to Minesweeper!\n");
    printf("Enter row and column (e.g., 3 5) to uncover a cell.\n");

    while (!gameOver) {
        printBoard();

        printf("�����к��� ");
        scanf("%d %d", &row, &col);

        if (mineBoard[row][col] == '*') {
            printf("��Ϸʧ�ܣ��㱻ը����\n");
            revealMines();
            printBoard();
            gameOver = 1;
        }
        else {
            uncoverCell(row, col);

            if (isGameWon()) {
                printf("��ϲ����Ӯ��\n");
                gameOver = 1;
            }
        }
    }

    return 0;
}

