#include <stdio.h>
#include <vector>
using namespace std;

void    swaprow(std::vector<std::vector<float>>& matrix, int row1, int row2, int n) {
    for (int j = 0; j < n; j++) {
        float temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}

void multiplyrow(std::vector<std::vector<float>>& matrix, int row, float scalar, int n) {
    for (int j = 0; j < n; j++) {
        if(scalar == 0) 
                continue;
        matrix[row][j] *= scalar;
    }
}
void addrow(std::vector<std::vector<float>>& matrix, int targetRow, int sourceRow, float scalar, int n) {
    for (int j = 0; j < n; j++) {
        matrix[targetRow][j] += matrix[sourceRow][j] * scalar;
    }
}