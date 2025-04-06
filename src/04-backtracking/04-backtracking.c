/**
 * @file 04-backtracking.c
 * @brief Implementation of the N-Queens problem using backtracking.
 *
 * This program solves the N-Queens problem for a board of size N x N.
 * The goal is to place N queens on the board such that no two queens
 * threaten each other. This is achieved using a backtracking algorithm.
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define N 10 // Size of the chessboard

/**
 * @brief Prints the solution board.
 *
 * This function prints the N x N chessboard with queens ('Q') and empty
 * spaces ('.') based on the solution found by the backtracking algorithm.
 *
 * @param board The N x N chessboard array.
 */
void printSolution(int board[N][N]);

/**
 * @brief Checks if a queen can be placed on the board at a given position.
 *
 * This function checks if placing a queen at board[row][col] is safe.
 * It ensures that no other queens threaten this position by checking
 * the row, upper diagonal, and lower diagonal on the left side.
 *
 * @param board The N x N chessboard array.
 * @param row The row index of the position to check.
 * @param col The column index of the position to check.
 * @return true if the position is safe, false otherwise.
 */
bool isSafe(int board[N][N], int row, int col);

/**
 * @brief Solves the N-Queens problem using backtracking.
 *
 * This function attempts to place queens on the board column by column.
 * If a solution is found, it returns true. Otherwise, it backtracks and
 * tries other possibilities.
 *
 * @param board The N x N chessboard array.
 * @param col The current column index being solved.
 * @return true if a solution is found, false otherwise.
 */
bool solveNQUtil(int board[N][N], int col);

/**
 * @brief Initializes and solves the N-Queens problem.
 *
 * This function initializes the chessboard and calls the backtracking
 * utility function to solve the N-Queens problem. If a solution exists,
 * it prints the solution. Otherwise, it prints an error message.
 *
 * @return true if a solution is found, false otherwise.
 */
bool solveNQ();

/**
 * @brief The main entry point of the program.
 *
 * This function calls the solveNQ function to solve the N-Queens problem.
 *
 * @return 0 on successful execution.
 */
int main();

void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%s ", board[i][j] ? "Q" : ".");
        }
        printf("\n");
    }
}

bool isSafe(int board[N][N], int row, int col) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(int board[N][N], int col) {
    if (col >= N)
        return true;

    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;

            if (solveNQUtil(board, col + 1))
                return true;

            board[i][col] = 0; // BACKTRACK
        }
    }
    return false;
}

bool solveNQ() {
    int board[N][N] = {0};

    if (!solveNQUtil(board, 0)) {
        printf("Solution does not exist");
        return false;
    }

    printSolution(board);
    return true;
}

int main() {
    solveNQ();
    return 0;
}