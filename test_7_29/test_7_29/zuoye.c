#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二分查找


//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int key = 7; // 要找的元素
//    int mid = 0; // 存储中间元素的索引
//    int found = 0; // 是否找到该元素
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
//        printf("找到了，下标是%d\n", mid);
//    }
//    else {
//        printf("找不到\n");
//    }
//
//    return 0;
//}


//扫雷游戏
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

        printf("输入行和列 ");
        scanf("%d %d", &row, &col);

        if (mineBoard[row][col] == '*') {
            printf("游戏失败，你被炸死了\n");
            revealMines();
            printBoard();
            gameOver = 1;
        }
        else {
            uncoverCell(row, col);

            if (isGameWon()) {
                printf("恭喜，你赢了\n");
                gameOver = 1;
            }
        }
    }

    return 0;
}

