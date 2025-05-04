#include <iostream>
using namespace std;

const int ROWS = 2, COLS = 3;
const int COLS_B = 2;

int main() {
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int B[COLS][COLS_B] = {{7, 8}, {9, 10}, {11, 12}};
    int C[ROWS][COLS_B] = {0};

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS_B; j++) {
            for(int k = 0; k < COLS; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matrix Multiplication Result: \n";
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS_B; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
