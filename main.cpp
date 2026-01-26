#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;

int main() {
    int order_of_matrix;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &order_of_matrix);
    vector<vector<float>> matrix(order_of_matrix, vector<float>(order_of_matrix));
    printf("Enter the elements of the matrix row-wise:\n");
    for (int i = 0; i < order_of_matrix; i++) {
        for (int j = 0; j < order_of_matrix; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    for(int i = 0; i < order_of_matrix - 1; i++) {
        if(matrix[i][i] == 0){
            swaprow(matrix, i, order_of_matrix -1, order_of_matrix);
        }
        else if(matrix[i][i] != 0 && matrix[i][i] != 1){
        multiplyrow(matrix, i, 1.0 / matrix[i][i], order_of_matrix);
        }
        for(int j = i + 1; j < order_of_matrix; j++) {
            addrow(matrix, j, i, -matrix[j][i], order_of_matrix);
        }

    }
    printf("The entered matrix is:\n");
    for (int i = 0; i < order_of_matrix; i++) {
        for (int j = 0; j < order_of_matrix; j++) {
            if(matrix[i][j] == -0.00){
                printf("%.2f ", 0.00);
            }else{
                printf("%.2f ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}